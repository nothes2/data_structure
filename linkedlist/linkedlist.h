# ifndef C_LINKEDLIST_H
#endif

typedef struct node
{
    void* data;
    struct node *next;
    struct node *prev;
}Node;


typedef struct linkedList
{
    struct node *head;
}LinkedList;

LinkedList* createLinkedList();
int append(LinkedList* List, void* data);
int removeNode(LinkedList* List, void* data);
int updateNode(LinkedList* List, void* oLd_data, void* new_data);
int isEmpty(LinkedList* List);
int getData(LinkedList* LinkedList, int index);