#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "stack.h"

static void print_stack(const Stack *stack){
	ListNode *node;
	int *data, size, i;
	
	printf("\nTamano de la pila es: %d", size = stack_size(stack));
	
	i= 0;
	node= list_head(stack);
	while(i< size){
		data = list_data(node);
		printf("\npila[%d]= %d, %p -> %p\n", i, *data, node, node->next);
		node = list_next(node);
	 	i++;
	}
	return;
}

int main(){
	Stack stack;
	int *data, i;
	stack_init(&stack, free);
	
	printf("\nAgregando 10 elementos\n");
	for (i = 0; i < 10; i++) {
		if ((data = (int *)malloc(sizeof(int))) == NULL)
	    	return 1;

	   		*data = i + 1;

		if (stack_push(&stack, data) != 0)
	    	return 1;
/*	printf("\nSe agrego el elemento %d\n", i+1);
	print_stack(&stack);*/		//pruebas
	}
	print_stack(&stack);
	
	printf("\nHaciendo pop a 3 elementos\n");
	for (i = 0; i < 3; i++) {
		if(stack_pop(&stack, (void **)&data) == 0)
			free(data);
		else
			return 1;
	}
	print_stack(&stack);
	
	fprintf(stdout, "Haciendo pop a todos los elementos\n");
	while (stack_size(&stack) > 0) {
		if (stack_pop(&stack, (void **)&data) == 0)
			free(data);
	}
	print_stack(&stack);
	
	fprintf(stdout, "\nEliminando la pila\n");
	stack_destroy(&stack);
	return 0;		
}
