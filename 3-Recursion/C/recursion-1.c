#pragma warning(disable:4996)
#include <stdio.h>

int rSum(int N);

int main() {

    int N;
    scanf("%d", &N);

    printf("%d", rSum(N));

    return 0;
}

int rSum(int N) {
    if (N == 1)
        return 1; 
    else 
        return N + rSum(N - 1);
}