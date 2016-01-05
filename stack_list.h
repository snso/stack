#ifndef STACK_LIST_H_
#define STACK_LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define ERR(s) do{fprintf(stderr, "[error--%s--%d--%s--%s\n]",__FILE__,__LINE__,s,strerror(errno));}while(0)

typedef enum{FALSE,TRUE}Bool;
	
typedef struct
{
	int num;
}Data;	

typedef struct NODE
{
	Data data;				//数据内容
	struct NODE *next;	//指向下个结点
}Node;

typedef struct
{
	Node *top;			//栈顶指针
	Node *bottom;		//栈底
	int size;			//链表长度
}Stack;


Stack *initStack();		//初始化
void destroyStack(Stack *stack);	//销毁
void clearStack(Stack *stack);	//清空
Bool stackEmpty(Stack *stack);	//是否为空
int stackLength(Stack *stack);	//队列长度
void stackPush(Stack *stack, Data elem);	//入栈
Data stackPop(Stack *stack)	;		//出栈


#endif
