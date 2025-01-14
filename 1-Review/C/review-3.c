#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main() {

    int N;
    scanf("%d", &N);

    int *arr = (int *)malloc(sizeof(int) * N);
    if(arr == NULL) {
        printf("arr 동적 할당 실패\n");
        return 0;
    }
    
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