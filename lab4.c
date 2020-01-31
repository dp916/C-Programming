/*-------------------------------------------------------------------*/
/* Danny Pham    */
/* Lab 4         */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int n, start, end, squared;
    double sqroot, sine;

    printf("\nDanny Pham. Lab 4.\n\n");
    printf("Enter your start number: ");
    scanf("%i", &start);
    printf("\nEnter your end number: ");
    scanf("%i", &end);        

    printf("\n  N       Squared     Square Root       Sine \n");
    printf("-----     -------     -----------     -------- \n");	

    for (n = start; n <= end; n++)
    {
	squared = n * n;
	sqroot = sqrt(n);
	sine = sin(n);
	printf("%4i %11i %15.3f %12.3f\n", n, squared, sqroot, sine); 
    }

    return EXIT_SUCCESS;
}

/*-------------------------------------------------------------------*/
