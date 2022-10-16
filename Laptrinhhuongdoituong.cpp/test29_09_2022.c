#include <stdio.h>
#include <stdlib.h>
typedef struct _listnode
{
    int idx;
    int num;
    struct _listnode *next;
} ListNode;

void printList(ListNode *head)
{
    ListNode *cur = head;
    if (cur == NULL)
        return;
    while (cur != NULL)
    {
        printf("%d ", cur->num);
        cur = cur->next;
    }
}

int main()
{
    int n, x;
    ListNode *newNode, *head = NULL;
    scanf("%d%d", &n, &x);
    newNode = malloc(sizeof(ListNode));
    head = newNode;
    for (int i = 1; i < n; i++)
    {
        newNode->idx = i;
        scanf("%d", &newNode->num);
        newNode->next = malloc(sizeof(ListNode));
        newNode = newNode->next;
    }
    newNode->idx = n;
    scanf("%d", &newNode->num);
    newNode->next = NULL;
    ListNode *p;
    p = deleteAt(head, x);
    printList(head);
    return 0;
}
