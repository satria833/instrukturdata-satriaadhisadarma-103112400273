#ifndef STACK_H
#define STACK_H

struct Stack {
    int data[100];
    int top;
};

void CreateStack(Stack &S);
void Push(Stack &S, int value);
void Pop(Stack &S);
void printInfo(Stack S);
void balikStack(Stack &S);
void pushAscending(Stack &S, int value);
void getInputStream(Stack &S);

#endif