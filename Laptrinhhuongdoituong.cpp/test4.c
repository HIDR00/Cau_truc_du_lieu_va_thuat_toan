#include <stdio.h>
#include <stdlib.h>

typedef struct listnode
{
    int x;
    struct listnode *next;
} listnode;
void insert_begin(listnode **root, int value, int score)
{
    listnode *newnode = malloc(sizeof(listnode));
    newnode->x = value;
    newnode->score = score;
    newnode->next = *root;
    *root = newnode;
}
void insert_end(listnode **root, int value, int scora)
{
    listnode *newnode = malloc(sizeof(listnode));
    newnode->x = value;
    newnode->score = score;
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
void insert_after(listnode *node, int value, int score, int score)
{
    listnode *newnode = malloc(sizeof(listnode));
    newnode->x = value;
    newnode->score = score;
    newnode->next = node->next;
    node->next = newnode;
}
void insert_sorted(listnode **root, int value, int score)
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

int main()
{
    int n, x, value;
    listnode *root = malloc(sizeof(listnode));
    scanf("%d %d %d", &n, &x, &value);
    listnode *head = root;
    for (int i = 1; i < n; i++)
    {
        scanf("%d %d", &root->x, &root->score);
        root->next = malloc(sizeof(listnode));
        root = root->next;
    }
    scanf("%d %d", &root->x, &root->score);
    root->next = NULL;
    insert_sorted(&head, x, score);
    for (listnode *cur = root; cur != NULL; cur = cur->next)
    {
        printf("%d\n", cur->x);
    }
    return 0;
}