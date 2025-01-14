#pragma warning(disable:4996)
#include <stdio.h>

typedef struct Student {
    char name[10];
    int score;
}Student;

int main() {

    Student student[5];
    int total = 0;
    for(int i = 0; i < 5; i++) {
        scanf("%s %d", student[i].name, &student[i].score);
        total += student[i].score;
    }

    int avg = total / 5.0;
    for(int i = 0; i < 5; i++) {
        if(avg >= student[i].score)
            printf("%s\n", student[i].name);
    }

    return 0;
}