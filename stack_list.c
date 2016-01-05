#include "stack_list.h"

//��ʼ��
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
//����
void destroyStack(Stack *stack)
{
	clearStack(stack);
	free(stack->top);
	free(stack);
}	
//���
void clearStack(Stack *stack)
{
	while(stack->top != stack->bottom)
	{
		stackPop(stack);
	}

}	
//�Ƿ�Ϊ��
Bool stackEmpty(Stack *stack)
{
	return stack->size == 0;
}
//���г���
int stackLength(Stack *stack)
{
	return stack->size;
}	
//��ջ
void stackPush(Stack *stack, Data elem)
{
	Node *newNode = malloc(sizeof(Node));
	newNode->data = elem;
	newNode->next = NULL;
	
	stack->top->next = newNode;
	stack->top = newNode;
	stack->size++;
}	
//��ջ
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




