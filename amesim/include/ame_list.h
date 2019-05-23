#ifndef __AME_LIST_H__
#define __AME_LIST_H__

/*!\file ame_list.h
 * \brief header for AME_LIST : a doubly linked list.
 * 
 * an AME_LIST is made of AME_LIST_ELEM. 
 * This is a doubly-linked list : Each AME_LIST_ELEM refers to
 * the previous and next AME_LIST_ELEM in the list.
 * Each AME_LIST_ELEM refers to an AME_LIST_ITEM
 * \author lperrin
 */

/*! an item store in a node of AME_LIST */
typedef  void* AME_LIST_ITEM;

/*! a node of AME_LIST */
typedef struct ame_list_elem {
   AME_LIST_ITEM item;           /**< pointer to the data store in this elem */
   struct ame_list_elem *next;   /**< pointer to the next elem in list (NULL if this elem is the last one) */
   struct ame_list_elem *prev;   /**< pointer to the previous elem in list (NULL if this elem is the first one) */
} AME_LIST_ELEM;

/*! doubly-linked list */
typedef struct ame_list {
   int size;                  /**< number of items in the list */
   AME_LIST_ELEM *first_elem; /**< pointer to the first elem of the list (NULL if list is empty) */
   AME_LIST_ELEM *last_elem;  /**< pointer to the last elem of the list (NULL if list is empty) */
} AME_LIST;

AME_LIST* create_list();
void delete_list(AME_LIST* list, int delete_items);
AME_LIST_ITEM pop_back(AME_LIST* list);
AME_LIST_ITEM pop_front(AME_LIST* list);
void push_back(AME_LIST* list, AME_LIST_ITEM item);
void push_front(AME_LIST* list, AME_LIST_ITEM item);
int count(AME_LIST* list, int (*condition)(AME_LIST_ITEM, void *), void *arg);
AME_LIST_ELEM* find_elem(AME_LIST* list, int (*condition)(AME_LIST_ITEM, void *), void *arg);
AME_LIST_ITEM pop_elem(AME_LIST* list, AME_LIST_ELEM *elem);
AME_LIST_ITEM pop_item(AME_LIST* list, AME_LIST_ITEM item);
void insert_item_at(AME_LIST* list, int pos, AME_LIST_ITEM item_to_insert);
AME_LIST_ITEM get_item_at(AME_LIST* list, int pos);
AME_LIST_ELEM* get_elem_at(AME_LIST* list, int pos);

#endif /*__AME_LIST_H__ */
