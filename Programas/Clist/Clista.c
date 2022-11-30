#include <stdio.h>
#include <stdlib.h>

#include "clist.h"

/*
   Print List
*/

static void print_list (const CList *list) {
    CListNode *node;
    int *data, i;

    fprintf(stdout, "List size is %d\n", clist_size(list));

    i = 0;
    node = clist_head(list);

    while (i< clist_size(list)) {
        data = clist_data(node);
        fprintf(stdout, "list.node[%03d]=%03d, %p -> %p \n", i, *data, node, node->next);

        i++;
        
        node = clist_next(node);
    }

   return;
}


int main(){
	CList list;
    CListNode *node;

    int *data, i;

    // Initialize the linked list
    clist_init(&list, free);

    // Fill the linked list
    node = clist_head(&list);
    
    for (i = 10; i > 0; i--) {

       if ((data = (int *)malloc(sizeof(int))) == NULL)
            return 1;

        *data = i;

        if (clist_ins_next(&list, NULL, data) != 0)
            return 1;
    }

	/*
    print_list(&list);
       
	  
	// Destroying the list
    fprintf(stdout, "\nDestroying the list\n");
	clist_destroy( & list);*/
	return 0;
	
}
