#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listnode
{
    int x;
    int score;
    char ten[20];
    char tinh[20];
    struct listnode *next;
} listnode;

void a(listnode **head, int score, char *tinh)
{
    listnode *cur = *head;
    int dem = 0;
    while (cur != NULL)
    {
        if (cur->score >= 24 && strcmp(cur->tinh, *tinh) == 0)
        {
            dem++;
        }
        cur = cur->next;
    }
    printf("%d\n", dem);
    listnode *cur1 = *head;
    while (cur1 != NULL)
    {
        if (cur1->score >= 24 && strcmp(cur->tinh, *tinh) == 0)
        {
            printf("%d %d %s\n", cur->x, cur->score, cur->ten);
        }
        cur = cur->next;
    }
}
int main()
{
    FILE *fi = fopen("bai5.inp", "r");
    FILE *fo = fopen("bai5.out", "w");
    int n, score;
    char tinh[20];
    scanf("%d %d %s", &n, &score, &tinh);
    listnode *root = malloc(sizeof(listnode));
    listnode *head = root;
    for (int i = 1; i < n; i++)
    {
        scanf("%d %d %s %s", &root->x, &root->score, &root->ten, &root->tinh);
        root->next = malloc(sizeof(listnode));
        root = root->next;
    }
    scanf("%d %d %s %s", &root->x, &root->score, &root->ten, &root->tinh);
    root->next = NULL;
    a(&head, score, tinh);
    return 0;
}