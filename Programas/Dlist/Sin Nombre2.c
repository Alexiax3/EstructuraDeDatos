#include <stdio.h>
#include <stdlib.h>

#include "dlist.h"

// print list
static void print_Dlist (const DList *list) {
    DListNode *node;
    int *data, i;

    fprintf(stdout, "\n\n\tList size is %d\n", dlist_size(list));

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

    for (i = 1; i<11  ; i++ ){
    	//a=0;

        if ((data = (int *)malloc(sizeof(int))) == NULL){
        	//a+=5;
			return 5;
		}
         
        *data =12- i;//dato a guardar
		if(dlist_ins_next (&list,list.head,data )!=0)
			return 0;
		
		//node->prev=list.tail->prev;	    
    }
    node= list.head;
    if (dlist_remove(&list, node, (void**)&data) != 0)
        return 1;
    node= list.head;
    *data=1;
    if (dlist_ins_prev(&list, list.head,data) != 0)
        return 1;
	print_Dlist(& list);
	
	
	//for(1=0;i< (list.size/2);i++){
	printf("\n\n\n\t\t\tREMOVER CABEZA");
		node=list.head;
    	if (dlist_remove(&list, node, (void**)&data) != 0)
        return 1;
	//}
	print_Dlist(& list);

	
    	printf("\n\n\n\t\t\tREMOVER COLA");
	
	   	if (dlist_remove(&list, list.tail, (void**)&data) != 0)
        return 1;
	//}
	print_Dlist(& list);

    printf("\n\n\n\t\t\tREMOVER 5-7");
	node=list.head;
		for(i=0;i<8;i++){
			
			if(i<7 && i>3){
				if (dlist_remove(&list,node , (void**)&data) != 0)
        			return 1;
			}
		node=node->next;
		}
	   	
	//}
	print_Dlist(& list);
    
    //cambio de cabeza por 9
    
    /*
    //INSERT ACOUNT
         	*data = 422068044;
         	node=dlist_head(&list);
         	for (i = 0; i < (list.size/2); ++i)
        	node = dlist_next(node);
        	
        	
		if(dlist_ins_prev (&list,node , data )!=0)
			return 0;
			
			    
    print_Dlist(&list);
    
    // Destroying the list
    fprintf(stdout, "\nDestroying the list\n");
    dlist_destroy(&list);
    return 0;
    */
}


