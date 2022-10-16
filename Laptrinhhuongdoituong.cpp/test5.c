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
        if (cur->score >= value)
        {
            dem++;
        }
        cur = cur->next;
    }
    printf("Tong so sinh vien tham du ky thi cuoi ky: %d\n", dem);
    listnode *tmp = *head;
    while (tmp != NULL)
    {
        if (tmp->score >= value)
        {
            printf("%d %d\n", tmp->x, tmp->score);
        }
        tmp = tmp->next;
    }
}
int main()
{
    int n, x;
    listnode *root = malloc(sizeof(listnode));
    scanf("%d %d", &n, &x);
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
    return 0;
}