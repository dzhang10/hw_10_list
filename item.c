# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# include "item.h"

void print_item(struct item * given){
	printf("Item %s cost $%d\n",given->name, given->cost);
}

struct item * new_item(char *n, int i, struct item* list){
	struct item *nu;

	nu = malloc( sizeof(struct item));

	strncpy(nu->name, n, sizeof(nu->name)-1);
	nu->cost = i;
	nu->next = list;

	return nu;
}

void change_price(struct item * given, int new_cost){

	given->cost= new_cost;

}

void change_name(struct item * given, char *n){

	strncpy(given->name, n, sizeof(given->name)-1);
}

void print_list(struct item *node){

	while(node!=NULL){
		print_item(node);
		node = node->next;
	}

}
struct item * insert_front(struct item *list, char *n, int cost){

	struct item *nu = new_item(n, cost, list);
	return nu;

}
struct item * free_list(struct item * node){

	struct item *first =node;
	struct item *next= NULL;

	while(node!=NULL){
		next = node->next;
		printf("freeing %s\n",node->name);
		free(node);
		node=next;
	}
	return first;

}
struct item * remove_node(struct item * node, char *n){

	struct item* first = node;
	if(strcmp(node->name,n)==0){
		first = node->next;
		free(node);
		return first;
	}

	struct item *last = node;

	while(node!=NULL){
		if(strcmp(node->name,n)==0){
			last->next = node->next;
			free(node);
			break;
		}
		last = node;
		node = node->next;
	}

	return first;
}
