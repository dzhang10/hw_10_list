#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "item.h"

int main(){

	struct item *item_list = NULL;

	item_list = insert_front(item_list,"phone",150);
	item_list = insert_front(item_list,"tablet",250);
	item_list = insert_front(item_list,"camera",550);
	item_list = insert_front(item_list,"laptop",950);
	item_list = insert_front(item_list,"drives",50);

	printf("Original List\n");
	print_list(item_list);


	item_list = remove_node(item_list, "tablet");
	printf("\nremove tablet\n");
	print_list(item_list);

	item_list = remove_node(item_list, "laptop");
	printf("\nremove laptop\n");
	print_list(item_list);

	printf("\ntest free_list\n");
	free_list(item_list);
	return 0;
}
