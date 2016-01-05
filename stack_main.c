#include "stack_list.h"

int main()
{
	//初始化
	Stack *stack = initStack();
	//插入数据
	
	Data insert_data;
	
	insert_data.num = 10;
	stackPush(stack,insert_data);
	insert_data.num = 11;
	stackPush(stack,insert_data);
	insert_data.num = 12;
	stackPush(stack,insert_data);
	insert_data.num = 18;
	stackPush(stack,insert_data);
	
	printf("stack len : %d\n",stackLength(stack));
	
	Node *tmp = stack->bottom;
	while(tmp->next)
	{
		tmp = tmp->next;
		printf("data : %d\n",tmp->data.num);
	}
	

	Data my_data = stackPop(stack);
	printf("stack data : %d\n",my_data.num);
	my_data = stackPop(stack);
	printf("stack data : %d\n",my_data.num);
	my_data = stackPop(stack);
	printf("stack data : %d\n",my_data.num);
	my_data = stackPop(stack);
	printf("stack data : %d\n",my_data.num);

	destroyStack(stack);

//	printf("data : %d\n",stack->phead->next->data.num);

}