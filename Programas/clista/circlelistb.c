#include <stdio.h>
#include <stdlib.h>

#include "clist.h"

/*
   Print List
*/

static void print_list (const Clist *list) {
    ListNode *node;
    int *data, i;

    fprintf(stdout, "List size is %d\n", list_size(list));

    i = 0;
    node = list_head(list);

    while (1) {
        data = list_data(node);
        fprintf(stdout, "list.node[%03d]=%03d, %p -> %p \n", i, *data, node, node->next);

        i++;

        if (list_is_tail(node))
            break;
        else
            node = list_next(node);
    }

   return;
}

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

/*
   Print List
*/

static void print_list (const List *list) {
    ListNode *node;
    int *data, i;

    fprintf(stdout, "List size is %d\n", list_size(list));

    i = 0;
    node = list_head(list);

    while (1) {
        data = list_data(node);
        fprintf(stdout, "list.node[%03d]=%03d, %p -> %p \n", i, *data, node, node->next);

        i++;

        if (list_is_tail(node))
            break;
        else
            node = list_next(node);
    }

   return;
}

