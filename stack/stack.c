#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

Stack* createStack();
int isEmpty(Stack* s);
int isFull(Stack* s);
int peek(Stack* s);
int pop(Stack* s);
int push(Stack* s,int data);

Stack* createStack()
{
    Stack* s = (Stack*)malloc(sizeof(Stack));
    s->top = -1;
    return s;
}

int isEmpty(Stack* s)
{
    return s->top == -1;
}

int isFull(Stack* s)
{
    return s->top == MAX_SIZE -1;
}

int peek(Stack* s)
{
    if(isEmpty(s)){
        printf("stack underflow!");
        exit(0);
    }

    return s->value[s->top];
}

int pop(Stack *s)
{
    if(isEmpty(s))
    {
        printf("stack underflow!");
        exit(0);
    }

    return s->value[s->top--];
}

int push(Stack *s, int data)
{
    if(isFull(s))
    {
        printf("stack overflow");
    }

    return s->value[++(s->top)] = data;
}

int main()
{

    return 0;
}



