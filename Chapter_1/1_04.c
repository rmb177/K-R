#include <stdio.h>

/**
* Print Celsius-Farenheit table for celsius = 0, 20, ..., 300;
* floating-point version.
*/

main()
{
   int lower = 0;
   int upper = 300;
   int step = 20;
   
   float celsius = lower;
   float fahr = 0;
   
   printf("\nCelsius\tFarenheit\n");
   while (celsius <= upper)
   {
      fahr = ((9.0 / 5.0) * celsius) + 32.0;
      printf("%8.0f\t%6.1f\n", celsius, fahr);
      celsius += step;
   }
}