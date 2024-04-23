#ifdef H_STACK
#endif

#define MAX_SIZE 100


typedef struct stack
{
    int value[MAX_SIZE];
    int top;
}Stack;

Stack* createStack();

int isEmpty(Stack* s);
int isFull(Stack* s);
int peek(Stack* s);
int pop(Stack* s);
int push(Stack* s, int data);
