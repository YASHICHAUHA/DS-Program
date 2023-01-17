#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *getnode()
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    return p;
}
void insbeg(struct node **start, int x)
{
    struct node *temp;
    temp = getnode();
    temp->info = x;
    temp->next = (*start);
    *start = temp;
}
int insaf(struct node **temp, int x)
{
    struct node *p;
    p = getnode();
    p->info = x;
    (p->next) = (*temp)->next;
    (*temp)->next = p;
}
void ascending(struct node **start, int x)
{
    struct node *p, *q;
    p = *start;
    q = NULL;
    while (p != NULL && x >= p->info)
    {
        q = p;
        p = p->next;
    }
    if (q == NULL)
        insbeg(&(*start), x);
    else
        insaf(&q, x);
}
void insend(struct node **start, int x)
{
    struct node *temp, *p;
    temp = *start;
    if (*start == NULL)
        insbeg(&(*start), x);
    else
    {

        while (temp->next != NULL)
            temp = temp->next;
        p = getnode();
        p->info = x;
        p->next = NULL;
        temp->next = p;
    }
}
void traverse(struct node *start)
{
    struct node *t;
    t = start;
    while (t != NULL)
    {
        printf(" %d ", t->info);
        t = t->next;
    }
}
 void intersection(struct node **start1, struct node **start2)
{

    struct node *p, *q;
    p = (*start1);
    q = (*start2);
    struct node *start3 = NULL;
    while (p != NULL && q != NULL)
    {
        if (p->info == q->info)
        {
            insend(&start3, p->info);
            p = p->next;
            q = q->next;
        }
        else
        {
            if (p->info < q->info)
                p = p->next;
            else
                q = q->next;
        }
    }
    traverse(start3);
}

int main()
{
    struct node *start1, *start2;
    start1 = NULL;
    start2 = NULL;
    ascending(&start1, 100);
    ascending(&start1, 59);
    ascending(&start1, 10);
    ascending(&start1, 200);
    ascending(&start1, 500);
    traverse(start1);
    printf("\n");
	ascending(&start2, 45);
    ascending(&start2, 10);
    ascending(&start2, 100);
    ascending(&start2, 440);
    ascending(&start2, 59);
    ascending(&start2, 500);
    ascending(&start2, 780);
    traverse(start2);
    printf("\n");
	intersection(&start1, &start2);
}
