#pragma warning(disable:4996)
#include <stdio.h>

typedef struct Time {
    int hour;
    int minute;
    int second;
}Time;

int main() {

    Time time[2];

    for(int i = 0; i < 2; i++)
        scanf("%d %d %d", &time[i].hour, &time[i].minute, &time[i].second);
    
    int total1 = time[0].hour * 3600 + time[0].minute * 60 + time[0].second;
    int total2 = time[1].hour * 3600 + time[1].minute * 60 + time[1].second;

    int diff;
    if(total1 < total2)
        diff = total2 - total1;
    else
        diff = total1 - total2;

    printf("%d %d %d", diff / 3600, diff / 60 % 60, diff % 60);

    return 0;
}