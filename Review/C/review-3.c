#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main() {

    int N;
    scanf("%d", &N);

    int *arr = (int *)malloc(sizeof(int) * N);
    for(int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    int a, b;
    scanf("%d %d", &a, &b);

    swap(&arr[a], &arr[b]);

    for(int i = 0; i < N; i++)
        printf(" %d", arr[i]);
    
    free(arr);

    return 0;
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}