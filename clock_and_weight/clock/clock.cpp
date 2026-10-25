#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int First_minute;
    int Second_minute, Hour;
    scanf("%d", &First_minute);
    Second_minute = First_minute % 60;
    Hour = First_minute / 60;
    printf("由%d分转换至%d时%d分", First_minute, Hour, Second_minute);
    return 0;
}