#include <stdio.h>
#include <stdlib.h>

struct list{
    int data;
    struct list *node;
};

int main() {
    int n, i;
    struct list *head = NULL, *p, *prev, *q;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        p = (struct list *) malloc(sizeof(struct list));
        p->node = NULL;
        scanf("%d", &p->data);
        if (head == NULL) head = p;
        else prev->node = p;
        prev = p;
    }
    for(i=0;i<n;i++){
        if(i == 0) q = head;
        else q = q->node;
        printf("%d ",q->data);
    }
}