#include <stdio.h>
#include <stdlib.h>

typedef struct listnode
{
    int x;
    int score;
    struct listnode *next;
} listnode;
void a(listnode **head, int value)
{
    int dem = 0;
    listnode *cur = *head;
    while (cur != NULL)
    {
        if (cur->x == value)
        {
            printf("%d", cur->score);
            dem++;
        }
        cur = cur->next;
    }
    if (dem == 0)
    {
        printf("No data");
    }
}
void printList(listnode *head)
{
    listnode *cur = head;
    if (cur == NULL)
        return;
    while (cur != NULL)
    {
        printf("%d %d\n", cur->x, cur->score);
        cur = cur->next;
    }
}
int main()
{
    int n, x, score;
    listnode *root = malloc(sizeof(listnode));
    scanf("%d %d %d", &n, &x, &score);
    listnode *head = root;
    for (int i = 1; i < n; i++)
    {
        scanf("%d %d", &root->x, &root->score);
        root->next = malloc(sizeof(listnode));
        root = root->next;
    }
    scanf("%d %d", &root->x, &root->score);
    root->next = NULL;
    a(&head, x);
    printList(head);
    return 0;
}