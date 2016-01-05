#include "stack_list.h"

//初始化
Stack *initStack()
{
	Stack *stack = NULL;
	stack = malloc(sizeof(Stack));
	stack->top = malloc(sizeof(Node));
	stack->top->next = NULL;
	stack->bottom = stack->top;
	
	stack->size = 0;
	
	return stack;
}	
//销毁
void destroyStack(Stack *stack)
{
	clearStack(stack);
	free(stack->top);
	free(stack);
}	
//清空
void clearStack(Stack *stack)
{
	while(stack->top != stack->bottom)
	{
		stackPop(stack);
	}

}	
//是否为空
Bool stackEmpty(Stack *stack)
{
	return stack->size == 0;
}
//队列长度
int stackLength(Stack *stack)
{
	return stack->size;
}	
//入栈
void stackPush(Stack *stack, Data elem)
{
	Node *newNode = malloc(sizeof(Node));
	newNode->data = elem;
	newNode->next = NULL;
	
	stack->top->next = newNode;
	stack->top = newNode;
	stack->size++;
}	
//出栈
Data stackPop(Stack *stack)
{
	Data data;
	if(stack->top == NULL)
	{
		return;
	}
	Node *tmp = stack->bottom;
	while(tmp->next->next)
	{
		tmp = tmp->next;
		printf("pop data : %d\n",tmp->data.num);
	}
	data = stack->top->data;
	stack->top = tmp;
	stack->size--;
	free(tmp->next);
	tmp->next = NULL;
	return data;
	
}		




