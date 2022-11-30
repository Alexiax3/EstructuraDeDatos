#include <stdio.h>
#include <stdlib.h>

#include "clist.h"


static void print_Clist (const CList *list) {
    CListNode *node;
    int *data, i;

    fprintf(stdout, "\n\n\tList size is %d\n", clist_size(list));

    i = 0;
    node = clist_head(list);
    data = clist_data(node);
    fprintf(stdout, "Clist.node[%03d]=%d\t %p -> %p \n", i, *data, node, node->next);
    node = clist_next(node);
	i=1;
    while (1) {
    	 if (node == clist_head(list))
            break;
            
        data = clist_data(node);
        fprintf(stdout, "Clist.node[%03d]=%d\t %p -> %p \n", i, *data, node, node->next);

        i++;

            node = clist_next(node);
    }


   return;
}


int main (int argc, char **argv) {
    CList list;
    CListNode *node;

    int *data, i;
	printf("\n\t\tINIT THE LIST WITH 2n tq n in N ");
    // Initialize the linked list
    clist_init(&list, free);
    node = clist_head(&list);
    
    for (i = 20; i > 0; i=i-2) {

        if ((data = (int *)malloc(sizeof(int))) == NULL)
            return 1;
			
        *data = i;
        
        if (clist_ins_next(&list,list.head, data) != 0)
            return 1;
            
    }
    printf("\n\tWe had some problems with NUll in our compiler ");
    print_Clist(&list);
    	
    printf("\n\n\tRemove second node ");
	node= list.head;
	
    if (clist_rem_next(&list, node, (void**)&data) != 0)
        return 1;
	
	print_Clist(&list);
	
	
	printf("\n\n\tRemove fourth  node ");
	
	node= list.head;
	for(i=0; i<2; i++){
		node = clist_next(node);
	}
	
    if (clist_rem_next(&list, node, (void**)&data) != 0)
        return 1;
	
	print_Clist(&list);
	
	printf("\n\t\tAdding before head");
	printf("\n\tRemember we had some problems with NUll so ");
	printf("\n  we're gonna add it in the tail wich is before head ;)\n");
	
	node=list.head;
	
	
	while (clist_next(node) != list.head) {
            node = clist_next(node);
    }
    
    	if ((data = (int *)malloc(sizeof(int))) == NULL)
            return 1;
			
        	*data = 422068044;
        
       	if (clist_ins_next(&list,node, data) != 0)
            	return 1;
            	
	
	print_Clist(&list);
	
	printf("\n\n\t\tAdd fourth  node ");
	
	node= list.head;
	for(i=0; i<2; i++){
		node = clist_next(node);
	}
	if ((data = (int *)malloc(sizeof(int))) == NULL)
            return 1;
	*data = 17;
    if (clist_ins_next(&list, node,data) != 0)
        return 1;
	
	print_Clist(&list);
	
	printf("\n Add \n");
	
	node=list.head;
	
	
	while (clist_next(node) != list.head) {
            node = clist_next(node);
    }
    
    	if ((data = (int *)malloc(sizeof(int))) == NULL)
            return 1;
			
        	*data = 422068044+422068044;
        
       	if (clist_ins_next(&list,node, data) != 0)
            	return 1;
            	
	
	print_Clist(&list);
	
	
	printf("\n\n\t\tDestroy the list");
	clist_destroy(&list);

    return 0;
        
    
}
