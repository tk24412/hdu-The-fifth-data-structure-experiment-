#pragma once
# include<stdio.h>
# include<malloc.h>

typedef struct LNode
{
    int data;
    struct LNode* next;
}LinkNode;

LinkNode* createNode(int data) {
    LinkNode* L = (LinkNode*)malloc(sizeof(LinkNode));
    L->data = data;
    L->next = NULL;
    return L;
}

void appendNode(LinkNode** head, int data) {
    LinkNode* L = createNode(data);
    if (*head == NULL) {
        *head = L;
    }
    else {
        LinkNode* p = *head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = L;
    }
}

void printList(LinkNode* head) {
    LinkNode* L = head;
    while (L != NULL) {
        printf("%d ", L->data);
        L = L->next;
    }
    printf("\n");
}

LinkNode* findNextGreaterElement(int arr[], int n) {
    LinkNode* L = NULL;
    for (int i = 0; i < n; i++) {
        int j = -1;
        int found = 0;
        for (int k = i + 1; k < n; k++) {
            if (arr[k] > arr[i]) {
                j = arr[k];
                found = 1;
                break;
            }
        }
        if (!found) {
            for (int k = 0; k < i; k++) {
                if (arr[k] > arr[i]) {
                    j = arr[k];
                    found = 1;
                    break;
                }
            }
        }
        if (!found) {
            j = -1;
        }

        appendNode(&L, j);
    }

    return L;
}
