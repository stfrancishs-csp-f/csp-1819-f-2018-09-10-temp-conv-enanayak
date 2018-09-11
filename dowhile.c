#include <stdio.h>
/* print Fahrenheit-Celsius table */
int main(void)
{
    int fahr;

    for (fahr = -50; fahr <= 120; fahr = fahr +5)

    //fahr values from -50 to 120 in incriments of 5
    {
        printf ("d - %4d c - %6.2f\n", fahr, (5.0/9.0)*(fahr-32));

        //4 spaces (left), 6 spaces and 2 decimal places (right), fahr value multiplied by 5.0/9.0 subtracted by 32

    }
}