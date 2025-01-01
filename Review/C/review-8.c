#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
    char name[8];
    int korean, english, math;
    double avg;
}Student;

int main() {

    int N;
    scanf("%d", &N);

    Student *students = (Student *)malloc(sizeof(Student) * N);
    if(students == NULL) {
        printf("students 동적 할당 실패\n");
        return 0;
    }

    for(int i = 0; i < N; i++) {
        scanf("%s %d %d %d", students[i].name, &students[i].korean, &students[i].english, &students[i].math);
        students[i].avg = (students[i].korean + students[i].english + students[i].math) / 3.0;
    }

    for(int i = 0; i < N; i++) {
        printf("%s %.1lf ", students[i].name, students[i].avg);
        if (students[i].korean >= 90 || students[i].english >= 90 || students[i].math >= 90) 
			printf("GREAT ");
		
		if (students[i].korean < 70 || students[i].english < 70 || students[i].math < 70)
			printf("BAD");
        printf("\n");
    }

    free(students);

    return 0;
}