#include <stdio.h>
 /* this time using the float */
int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */ 
    step = 20;      /* step size */ 

    fahr = lower;

    printf("Fahrenheit to Celsius conversion\n");
    /* print a heading above the table. */

    while (fahr <= upper) {
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        // %f is a format specifier for a float
        // %3.0f means print at least 3 characters wide, no decimal point
        // %6.1f means print at least 6 characters wide, with 1 decimal point
        fahr = fahr + step;
    }
}