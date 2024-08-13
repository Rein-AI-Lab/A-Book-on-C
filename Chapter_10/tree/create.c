/* In file create.c */

#include "tree.h"

// Creating a binary tree.
BTREE new_node(void)
{
    return (malloc(sizeof(NODE)));
}

BTREE init_node(DATA d1, BTREE p1, BTREE p2)
{
    BTREE t;

    t = new_node();
    t -> d = d1;
    t -> left = p1;
    t -> right = p2;
    return t;
}

// Create a linked binary tree from an array

BTREE create_tree(DATA a[], int i, int size)
{
    if (i >= size)
        return NULL;
    else
        return (init_node(a[i], create_tree(a, 2 * i + 1, size), create_tree(a, 2 * i + 2, size)));
