#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int* prefixAverages1(int* X, int n);
int* prefixAverages2(int* X, int n);

int main() {

    int n;
    scanf("%d", &n);

    int* X = NULL;
    X = (int*) malloc(sizeof(int) * n);
    if(X == NULL) {
        printf("X 동적 할당 실패\n");
        return -1;
    }

    for(int i = 0; i < n; i++)
        scanf("%d", &X[i]);
    
    int* A = NULL;
    A = prefixAverages1(X, n);
    for (int i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\n");

	A = prefixAverages2(X, n);
	for (int i = 0; i < n; i++)
		printf("%d ", A[i]);

	free(X);
	free(A);

    return 0;
}

int* prefixAverages1(int* X, int n) {
    int* A = (int*)malloc(sizeof(int) * n);
    if(A == NULL) {
        printf("A 동적 할당 실패\n");
        return NULL;
    }

    double sum = 0;
    for(int i = 0; i < n; i++) {
        sum = 0;
        for(int j = 0; j <= i; j++) {
            sum += X[j];
        }
        A[i] = sum / (i + 1) + 0.5;
    }

    return A;
}

int* prefixAverages2(int* X, int n) {
    int* A = (int*)malloc(sizeof(int) * n);
    if(A == NULL) {
        printf("A 동적 할당 실패\n");
        return NULL;
    }

    double sum = 0;
    for(int i = 0; i < n; i++) {
        sum += X[i];
        A[i] = sum / (i + 1) + 0.5;
    }

    return A;
}