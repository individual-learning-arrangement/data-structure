#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int mostOnes(int** arr, int n);

int main() {

    int n;
    int** arr = NULL;
    
    scanf("%d", &n);
    arr = (int**)malloc(sizeof(int*) * n);
    if(arr == NULL) {
        printf("arr 동적 할당 실패\n");
        return -1;
    }

    for(int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(sizeof(int) * n);
        if(arr[i] == NULL) {
            printf("arr[%d] 동적 할당 실패\n", i);
            return -1;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int max = mostOnes(arr, n);
    printf("%d", max);

    for(int i = 0; i < n; i++) 
        free(arr[i]);
    free(arr);

    return 0;
}

int mostOnes(int** arr, int n) {
    int i, j, row;

    i = 0, j = 0, row = 0;
    while((i < n) && (j < n)) {
        if(arr[i][j] == 0) {
            i++;
        }
        else {
            row = i;
            j++;
        }
    }

    return row;
}