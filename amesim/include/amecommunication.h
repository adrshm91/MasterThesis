#ifndef __AMECOMMUNICATION_H__
#define __AMECOMMUNICATION_H__


/** returns code of amempi functions */
enum communication_return_code {
   SUCCESS,       /* on success */
   UNKNOWN_ERROR, /* if an unknown error appears */
   CONNECTION_SHUTDOWN, /* if the communication is closed */
   RECV_ERROR,    /* if something went wrong with network */
   SOAP_ERROR,    /* if a problem appears after a soap call */
   CLIENT_ERROR,  /* if the client initialization failed */
   SERVER_ERROR,  /* if the server initialization failed */
   SLAVE_ERROR,   /* if the slave initialization failed */
   MASTER_ERROR,  /* if something went wrong with the master */
   BAD_ARGUMENT   /* if one argument has a an unexpected value */
};



#endif /*__AMECOMMUNICATION_H__ */
