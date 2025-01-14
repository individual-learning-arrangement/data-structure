#pragma warning(disable:4996)
#include <stdio.h>

int modulo(int a, int b);

int main(void) {

    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", modulo(a, b));

    return 0;
}

int modulo(int a, int b) {
    while(a >= b) {
        a -= b;
    }
    return a;
}