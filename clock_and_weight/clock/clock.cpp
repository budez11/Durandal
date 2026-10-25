#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int First_minute;
    int Second_minute, Hour;
    scanf("%d", &First_minute);
    do
    {
        Hour = First_minute / 60;
        printf("由%d分转换至%d时%d分\n", First_minute, Hour, Second_minute);
        scanf("%d", &First_minute);
    } while (First_minute >= 0);
    return 0;
}