struct item {
	char name[256];
	int cost;
	struct item *next;
	};

void print_item(struct item *);

struct item * new_item(char *n, int cost, struct item*next);

void change_price(struct item *, int new_price);

void change_name(struct item *, char *n);

void print_list(struct item *);

struct item * insert_front(struct item *, char *n, int cost);

struct item * free_list(struct item *);

struct item * remove_node(struct item * front, char *n);




