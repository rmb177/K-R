#include <stdio.h>

/**
* Print Farenheit-Celsius table for fahr = 0, 20, ..., 300;
* floating-point version.
*/

main()
{
   int lower = 0;
   int upper = 300;
   int step = 20;

   float fahr = lower;
   float celsius = 0;

   printf("\nFarenheit\tCelsius\n");
   while (fahr <= upper)
   {
      celsius = (5.0 / 9.0) * (fahr - 32.0);
      printf("%8.0f\t%6.1f\n", fahr, celsius);
      fahr += step;
   }
}