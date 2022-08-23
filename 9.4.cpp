#include<stdio.h>
void swap(int* a, int* b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int main() {
    int a[10], i,flag=1;
    int max = 0, min = 0;
    for (i = 0; i < 10; i++) {
        printf("input %d number\n",flag);
        flag++;
        scanf_s("%d", &a[i]);
        if (a[max] < a[i])
            max = i;
        if (a[min] > a[i])
            min = i;
    }
    printf("max is %d\n\n\n", a[max]);
    printf("min is %d\n\n\n", a[min]);
    printf("now array is\n");
    swap(&a[max], &a[min]);
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
}