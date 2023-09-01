#include "binary_trees.h"

int binary_tree_is_complete(const binary_tree_t *tree);
void free_queue(levelorder_queue_t *head);
levelorder_queue_t *create_node(binary_tree_t *node);
void push(binary_tree_t *node, levelorder_queue_t *head,
		levelorder_queue_t **tail);
void pop(levelorder_queue_t **head);

