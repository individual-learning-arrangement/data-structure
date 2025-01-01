#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d", &N);

    int *arr1 = (int *)malloc(sizeof(int) * N);
    if(arr1 == NULL) {
        printf("arr1 동적 할당 실패\n");
        return 0;
    }

    int *arr2 = (int *)malloc(sizeof(int) * N);
    if(arr2 == NULL) {
        printf("arr2 동적 할당 실패\n");
        return 0;
    }

    for(int i = 0; i < N; i++)
        scanf("%d", &arr1[i]);
    for(int i = 0; i < N; i++)
        scanf("%d", &arr2[i]);
    
    for(int i = 0; i < N; i++) 
        printf(" %d", arr1[i] + arr2[N - i - 1]);

    free(arr1); free(arr2);

    return 0;
}