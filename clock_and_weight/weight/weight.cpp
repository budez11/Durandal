#include <stdio.h>
#define CM_PER_IN 2.54
#define IN_PER_FT 12.0

int main(void)
{
    double cm,total_in,inches;
    int feet;

    printf("Enter a height in centimeters: ");
    scanf_s("%lf", &cm);
    while (cm > 0)
    {
        total_in = cm / CM_PER_IN;
        feet = (int)(total_in / IN_PER_FT);
        inches = total_in - feet * IN_PER_FT;
        printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inches);
        printf("Enter next height (<=0 to quit): ");
        scanf_s("%lf", &cm);
    }
    return 0;
}