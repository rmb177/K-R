#include <stdio.h>

/**
* Print Farenheit-Celsius table for fahr = 0, 20, ..., 300;
* floating-point version.
*/

void PrintConversionTable(int lower, int upper, int step);
   

main()
{
   PrintConversionTable(0, 300, 20);
}

/**
* Print out a temperature conversion table with the given
* lower/upper bounds and increment values.
*/
void PrintConversionTable(int lower, int upper, int step)
{
   printf("\nFarenheit\tCelsius\n");

   float fahr = lower;
   float celsius = 0;

   while (fahr <= upper)
   {
      celsius = (5.0 / 9.0) * (fahr - 32.0);
      printf("%8.0f\t%6.1f\n", fahr, celsius);
      fahr += step;
   }
}
