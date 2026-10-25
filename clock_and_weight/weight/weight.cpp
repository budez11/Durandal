#include <stdio.h>
#define CM_PER_IN 2.54
#define IN_PER_FT 12.0
#define KG_PER_LB 0.45359237

int main(void)
{
    double cm, total_in, inches;
    int feet;
    double kg, lb;

    printf("Enter heights in centimeters, one per line (<=0 to quit):\n");
    printf("%8s%8s%8s\n", "cm", "feet", "inches");
    printf("%8s%8s%8s\n", "--------", "--------", "--------");

    while (scanf_s("%lf", &cm) == 1 && cm > 0)
    {
        total_in = cm / CM_PER_IN;
        feet = (int)(total_in / IN_PER_FT);
        inches = total_in - feet * IN_PER_FT;

        printf("%8.2f%8d%8.2f\n", cm, feet, inches);
    }

    printf("\nEnter weights in kilograms, one per line (<=0 to quit):\n");
    printf("%8s%8s\n", "kg", "lb");
    printf("%8s%8s\n", "--------", "--------");

    while (scanf_s("%lf", &kg) == 1 && kg > 0)
    {
        lb = kg / KG_PER_LB;

        printf("%8.2f%8.2f\n", kg, lb);
    }

    printf("\nBye.\n");
    return 0;
}