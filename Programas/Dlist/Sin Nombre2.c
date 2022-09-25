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
        fprintf(stdout, "Dlist.node[%03d]=%010d,%p -> %p -> %p \n", i, *data, node->prev, node, node->next);

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
    int *data,*data2, i, j;

    // Initialize the linked list
    dlist_init(&list, free);
    
    // Fill the linked list
	printf("\n\n\n\t\t\tLISTA INICIAL");
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

	printf("\n\n\n\t\t\tINSERTAR CUENTA EN EL MEDIO");
	
	j=list.size/2;
	node=list.head;
	i=0;
	do{
		node=node->next;
		i++;
	}while(j>i);
				    
			*data=422068022;
    		if (dlist_ins_prev(&list,node,data) != 0)
        		return 1;
		
		print_Dlist(& list);

	
	printf("\n\n\n\t\t\tINSERTAR CUENTA EN TAIL");
    if (dlist_ins_next(&list, list.tail,data) != 0)
        return 1;
	print_Dlist(& list);
	
	printf("\n\n\n\t\t\tINSERTAR SUMA DE CUENTAS EN HEAD");
	if ((data2 = (int *)malloc(sizeof(int))) == NULL){
        	//a+=5;
			return 5;
		}
	j=2*422068022;
	*data2=j;
    if (dlist_ins_prev(&list, list.head,data2) != 0)
        return 1;
	print_Dlist(& list);
	
    printf("\n\n\n\t\t\tREMOVER 5-7");
	j=0;
	while(j<3){
	node=list.head;
		for(i=0;i<5;i++){
			node=node->next;
			if(i==4){
				if (dlist_remove(&list,node , (void**)&data) != 0)
        			return 1;
        			break;
			}	
		}
		j++;
	}
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


