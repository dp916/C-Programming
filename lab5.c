/*----------------------------------------------------------------------------------------------------*/
/* Danny Pham                                                       */
/* Lab 5                                                            */
/* Figure the perimeter and area of a polygon                       */
/* surrounded by a circle                                           */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//#define IN_FILENAME "lab5sample.dat"
//#define OUT_FILENAME "lab5sample.out"
#define IN_FILENAME "lab5.dat"
#define OUT_FILENAME "lab5.out"
 
int main(void)
{
    FILE * input;
    FILE * output; 	

    double radius, nsides, perimeter, area;

    input = fopen(IN_FILENAME, "r");
    if (input == NULL)
    {
	printf("Error on opening the data file\n");
	exit(EXIT_FAILURE);
    }

    output = fopen(OUT_FILENAME, "w");
    if (output == NULL)
    {
	printf("Error on opening the output file\n");
	exit(EXIT_FAILURE);
    }

    fprintf(output, "\nDanny Pham.  Lab 5.\n\n");
    fprintf(output, "            Number      Perimeter      Area Of  \n");
    fprintf(output, " Radius    Of Sides    Of Polygon      Polygon  \n");
    fprintf(output, "--------   --------   ------------   ----------- \n");

    while ((fscanf(input, "%lf%lf", &radius, &nsides)) == 2)	
    {
	perimeter = 2 * nsides * radius * sin(M_PI/nsides);
	area = .5 * nsides * radius * radius * sin((2 * M_PI)/(nsides));
	fprintf(output, "%7.2f   %8.2f   %12.4f  %12.4f\n", radius, nsides, perimeter, area);
    }

    fclose(input);
    fclose(output);		
    exit(EXIT_SUCCESS);
}
/*----------------------------------------------------------------------------------------------------*/
