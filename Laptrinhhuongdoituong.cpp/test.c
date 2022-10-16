#include <stdio.h>
#include <stdlib.h>

typedef struct listnode
{
    int x;
    struct listnode *next;
} listnode;
void insert_begin(listnode **root, int value)
{
    listnode *newnode = malloc(sizeof(listnode));
    newnode->x = value;
    newnode->next = *root;
    *root = newnode;
}
void insert_end(listnode **root, int value)
{
    listnode *newnode = malloc(sizeof(listnode));
    newnode->x = value;
    newnode->next = NULL;
    if (*root == NULL)
    {
        *root = newnode;
    }
    listnode *cur = *root;
    while (cur->next != NULL)
    {
        cur = cur->next;
    }
    cur->next = newnode;
}
void insert_after(listnode *node, int value)
{
    listnode *newnode = malloc(sizeof(listnode));
    newnode->x = value;
    newnode->next = node->next;
    node->next = newnode;
}
void insert_sorted(listnode **root, int value)
{
    if (*root == NULL || (*root)->x >= value)
    {
        insert_begin(root, value);
        return;
    }
    listnode *cur = *root;
    while (cur->next != NULL)
    {
        if (cur->next->x >= value)
        {
            insert_after(cur, value);
            return;
        }
        cur = cur->next;
    }
    insert_end(&cur, value);
}
void Remove(listnode **root, int value)
{
    listnode *cur = *root;
    if (cur == NULL)
    {
        return;
    }
    for (cur = *root; cur->next != NULL; cur = cur->next)
    {
        if (cur->next->x == value)
        {
            listnode *to_remove = cur->next;
            cur->next = cur->next->next;
            free(to_remove);
        }
    }
}
int main()
{
    listnode *root = malloc(sizeof(listnode));
    root->x = 1;
    root->next = malloc(sizeof(listnode));
    root->next->x = 2;
    root->next->next = malloc(sizeof(listnode));
    root->next->next->x = 100;
    root->next->next->next = NULL;
    insert_sorted(&root, 5);
    insert_sorted(&root, 3);
    insert_sorted(&root, 101);
    Remove(&root, 5);
    for (listnode *cur = root; cur != NULL; cur = cur->next)
    {
        printf("%d\n", cur->x);
    }
    return 0;
}