#include "linkedlist.h"
#include "stdio.h"

/**
 * 
 * @headerfile linkedlist.h
*/

LinkedList* createLinkedList();
int append(LinkedList* list, void* data);
int removeNode(LinkedList* list, void* data);
int updateNode(LinkedList* list, void* oLd_data, void* new_data);
int isEmpty(LinkedList* list);
int getData(LinkedList* LinkedList, int index);

// create LinkedList here
LinkedList* createLinedList()
{
    LinkedList *linkedlist = (LinkedList*)malloc(sizeof(LinkedList));
    Node* node = (Node*)malloc(sizeof(Node));

    node->data = NULL;
    node->next = node;
    node->prev = node;

    linkedlist->head = node;

    return linkedlist;
}

int appened(LinkedList* list, void* data) {
    Node* node = (Node*)malloc(sizeof(Node));
    list->head->next = node;

    node->prev = list->head;
    node->next = list->head;
    node->data = data;

}


