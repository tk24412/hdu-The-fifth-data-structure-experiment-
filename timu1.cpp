#include"suanfa3.h"
int main() {
    int arr[] = {11,41,192,20,5,101,60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    LinkNode* L = findNextGreaterElement(arr, n);
    printf("�������: ");
    printList(L);
    return 0;
}