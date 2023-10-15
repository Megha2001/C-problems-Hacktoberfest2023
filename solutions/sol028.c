// Solution to Qn028
// Write a C language program to show a trigonometry table.
// (sin, cos, tan, sec, cosec, cot, and angles are 0, 30, 45, 60 and 90 degrees)

#include <stdio.h>
#include <math.h>
void main()
{
    int arr[5] = {0, 30, 45, 60, 90};
    float radianValue;
    printf("\n### TRIGONOMETRY TABLE ###\n\n");
    printf("\tsin\tcos\ttan\tsec\tcosec\tcot\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
        radianValue = arr[i] * 3.14 / 180;
        printf("%.2f\t", sin(radianValue));
        printf("%.2f\t", cos(radianValue));

        // The if-else blocks check for cases when the value becomes infinity or not defined
        if (arr[i] == 90)
        {
            printf("ND\t");
            printf("ND\t");
        }
        else
        {
            printf("%.2f\t", tan(radianValue));
            printf("%.2f\t", 1 / cos(radianValue));
        }

        if (arr[i] == 0)
        {
            printf("ND\t");
            printf("ND\n\n");
        }
        else
        {
            printf("%.2f\t", 1 / sin(radianValue));
            printf("%.2f\n\n", 1 / tan(radianValue));
        }
    }
    printf("(ND stand for not defined)\n");
}