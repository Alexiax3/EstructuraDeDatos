#include <stdio.h>
#include <stdlib.h>

#include "dlist.h"

// print list
static void print_Dlist (const DList *list) {
    DListNode *node;
    int *data, i;

    fprintf(stdout, "List size is %d\n", dlist_size(list));

    i = 0;
    node = dlist_head(list);

    while (1) {
        data = dlist_data(node);
        fprintf(stdout, "Dlist.node[%03d]=%03d,%p -> %p -> %p \n", i, *data, node->prev, node, node->next);

        i++;

        if (dlist_is_tail(node))
            break;
        else
            node = dlist_next(node);
    }

   return;
}


int main (int argc, char **argv) {
    DList list;
    DListNode *node, *a;
    int *data, i;

    // Initialize the linked list
    dlist_init(&list, free);
    
    // Fill the linked list
    node = dlist_head(&list);

    for (i = 10; i > 0; i--) {
    	//a=0;

        if ((data = (int *)malloc(sizeof(int))) == NULL){
        	//a+=5;
			return 5;
		}
         
        *data = 10-i;//dato a guardar
		
		if(dlist_ins_prev (&list, list.tail, data )!=0)
			return 0;	
		
		list.tail->next=list.head;
			  
        //m=dlist_size(&list);
        //printf("\n en main es %d \n",m);	
            
    }
    list.tail->next=NULL;
    
    print_Dlist(& list);
    

    
}


