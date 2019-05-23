#ifndef __AMESOCKET_H__
#define __AMESOCKET_H__

// #ifndef WIN32
// #include <sys/types.h>
// #include <sys/socket.h>
// #include <inttypes.h>
// typedef int SOCKET;
// #else
/* windows platform */
#include <winsock.h>
#ifdef __GNUC__
#include <stdint.h>
#else
typedef unsigned _int64 uint64_t;
typedef unsigned _int32 uint32_t;
typedef unsigned _int16 uint16_t;
#endif
// #endif

#include "ame_list.h"
#define MAX_NB_VALUES_IN_AME_VECT 99

#define NETWORK_ERROR -1
#define NETWORK_OK     0

#if defined(LINUX) || defined(WIN32)
#define AME_ENDIANNESS	AME_LITTLE_ENDIAN
#else
#define AME_ENDIANNESS	AME_BIG_ENDIAN
#endif
#define AME_PROTOCOL_VERSION  (u_short)1

/*!\file amesocket.h
 * \brief provides functions to manage communications via sockets
 * 
 * This header defines a protocol for AME_SIM communication
 * it defines functions to launch a server, to connect a client,
 * to recv or send data throw these client or server, etc...
 * \author lperrin
 */
 
/*! different types of AME_SOCK_MSG 
 * \sa AME_SOCK_MSG_HDR
 * \sa AME_SOCK_MSG_BODY
 */
typedef enum ame_sock_msg_type {
   AME_CMD_STOP,     /*!< a stop command     */
   AME_VECT,         /*!< a vector of double (the maximum size is set via MAX_NB_VALUES_IN_AME_VECT) */
   AME_UNDEFINED,    /*!< the enum of MSG_TYPE is to be continued */
} AME_SOCK_MSG_TYPE;

/*! message endianness
 * \sa AME_SOCK_MSG_HDR
 */
typedef enum ame_sock_msg_endianness {
   AME_BIG_ENDIAN,	/*!< for Motorola/Sun Big Endian type */
   AME_LITTLE_ENDIAN,	/*!< for Intel Little Endian type */
} AME_SOCK_MSG_ENDIANNESS;

/*! message header
 * \warning the header is the only parts of the message that will be translated into network order before sending
 * \sa AME_SOCK_MSG_TYPE
 * \sa AME_SOCK_MSG_ENDIANNESS
 * \sa AME_SOCK_MSG
 */
typedef struct ame_sock_msg_hdr {
   uint32_t	 total_message_length;         /*!< 4 bytes, message length (including this header info) */
   uint32_t  protocol_version;             /*!< 1 byte, protocol version (1, 2 , 3 ...) */
   AME_SOCK_MSG_ENDIANNESS message_endianness;  /*!< 1 byte, message endianness  */
   AME_SOCK_MSG_TYPE type_of_message;           /*!< 2 bytes,  message type ID (AME_SOCK_MSG_TYPE) */
} AME_SOCK_MSG_HDR;

/*! body for message whose type is AME_VECT_BODY
 * \sa AME_SOCK_MSG_BODY
 */
typedef struct ame_vect_body {
   double         query_time;                        /*!< date of the creation of the packet */
   double         answer_time;                       /*!< date of the next expected answer */
   uint64_t       nb_values;                         /*!< number of double in values vector */
   double         values[MAX_NB_VALUES_IN_AME_VECT]; /*!< vector of double in which values are store */
} AME_VECT_BODY;

/*! body for message whose type is AME_CMD_STOP
 * \sa AME_SOCK_MSG_BODY
 */
typedef struct ame_cmd_stop_body {
   double   sender_time;   /*!< date of the creation of the packet */
   double   stop_time;     /*!< date for stopping process */
} AME_CMD_STOP_BODY;

/*! message body : an enum of different types of body
 * \sa AME_SOCK_MSG
 * \sa AME_SOCK_MSG_TYPE
 */
typedef union ame_sock_msg_body {
   AME_VECT_BODY     ame_vect;      /*!< body for message whose type is AME_VECT */
   AME_CMD_STOP_BODY ame_cmd_stop;  /*!< body for message whose type is AME_CMD_STOP */
   /* to be continued */
} AME_SOCK_MSG_BODY;

/*! a message 
 * a message is made of two parts : a header and a body
 */
typedef struct ame_sock_msg {
   AME_SOCK_MSG_HDR header;   /*!< message header */	
   AME_SOCK_MSG_BODY body;    /*!< message body */
} AME_SOCK_MSG;

/*! informations about a socket */
typedef struct ame_sock_socket_info {
   SOCKET socket;                         /*!< the socket identifier */
   int connected;									/*!< tells whether the socket is connected or not */
} AME_SOCKET_INFO;

/*! server identifier */
typedef struct ame_sock_server_info {
   uint16_t server_port;                         /*!< the server port */
   int server_launched; 
   SOCKET main_socket;                          /*!< the socket on which accept() are made */
   AME_LIST *ame_socket_info_list;              /*!< list of active sockets */
} AME_SERVER_INFO;

/*! server identifier */
typedef struct ame_sock_client_info {
   char *server_name;               /*!< the server name */
   uint16_t server_port;             /*!< the server port */
   AME_SOCKET_INFO socket_info;     /*!< informations about the socket */
} AME_CLIENT_INFO;

/*! necessary information for ManageConnection() or ReceiveAndSignal()
 * \sa ManageConnection()
 * \sa ReceiveAndSignal()
 */
typedef struct info_to_manage_connection {
   enum {AME_CLIENT, AME_SERVER} clientservertype;       /*!< connection type : from server or client ? */
   union {AME_SERVER_INFO *server_info; AME_CLIENT_INFO *client_info;} clientserverinfo; /*!< informations about client or server */
   AME_SOCKET_INFO *socket_info; /*!< informations about the socket */
} AME_CLIENTSERVER_INFO;

void initializemessage(AME_SOCK_MSG *message, AME_SOCK_MSG_TYPE msg_type);
void inversebytesorder(char* data_to_inverse, size_t size, size_t unit_size);

int launchserver(int server_port, AME_SERVER_INFO * server_info);
int waitforconnection(AME_SERVER_INFO * connection_info);
int server_recv(AME_SERVER_INFO *connection_info, AME_SOCK_MSG *val);
int server_tryrecv(AME_SERVER_INFO *server_info, AME_SOCK_MSG *val);
void server_send(AME_SERVER_INFO * server_info, AME_SOCK_MSG val);
void shutdownserver(AME_SERVER_INFO *server_info);
void waitallconnectionsclosed(AME_SERVER_INFO *connection_info);
void waituntilclientisconnected(AME_CLIENT_INFO *client_info);

int connectclient(const char * server_name, int server_port, AME_CLIENT_INFO * conn);
int client_recv(AME_CLIENT_INFO *client_info, AME_SOCK_MSG *val);
int client_tryrecv(AME_CLIENT_INFO *client_info, AME_SOCK_MSG *val);
void client_send(AME_CLIENT_INFO * client_info, AME_SOCK_MSG val);
void closeclientconnection(AME_CLIENT_INFO *client_info);

#endif /* __AMESOCKET_H__ */

