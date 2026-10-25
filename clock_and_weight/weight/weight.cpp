#include <stdio.h>
#define CM_PER_IN  2.54
#define IN_PER_FT  12.0
#define KG_PER_LB  0.45359237

int main(void)
{
    double cm, total_in, inches;
    int feet;
    double kg, lb;

    printf("Enter heights in centimeters (<=0 to quit):\n");
    printf(" %8s | %8s | %8s \n", "cm", "feet", "inches");
    printf("---------+---------+---------\n");
    scanf_s("%lf", &cm);
    while (cm > 0)
    {
        total_in = cm / CM_PER_IN;
        feet = (int)(total_in / IN_PER_FT);
        inches = total_in - feet * IN_PER_FT;

        printf(" %8.2f | %8d | %8.2f \n", cm, feet, inches);
        scanf_s("%lf", &cm);
    }

    printf("\nEnter weights in kilograms (<=0 to quit):\n");
    printf(" %8s | %8s \n", "kg", "lb");
    printf("---------+---------\n");
    scanf_s("%lf", &kg);
    while (kg > 0)
    {
        lb = kg / KG_PER_LB;
        printf(" %8.2f | %8.2f \n", kg, lb);
        scanf_s("%lf", &kg);
    }
    return 0;
}