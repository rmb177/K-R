#include <stdio.h>

/**
* Count number of vowels in the input and print a histogram of the
* results.
*/

void PrintHistogramLine(char aChar, int numInstances);

main()
{
   printf ("\n\n");
   
   int numAs = 0;
   int numEs = 0;
   int numIs = 0;
   int numOs = 0;
   int numUs = 0;
   
   char c;
   while ((c = getchar()) != EOF)
   {
      if (c == 'a' || c == 'A')
      {
         numAs++;
      }
      else if (c == 'e' || c == 'E')
      {
         numEs++;
      }
      else if (c == 'i' || c == 'I')
      {
         numIs++;
      }
      else if (c == 'o' || c == 'O')
      {
         numOs++;
      }
      else if (c == 'u' || c == 'U')
      {
         numUs++;
      }
   }
   
   printf("\n\n");
   PrintHistogramLine('a', numAs);
   PrintHistogramLine('e', numEs);
   PrintHistogramLine('i', numIs);
   PrintHistogramLine('o', numOs);
   PrintHistogramLine('u', numUs);
}


/**
* Print out a histogram line for the given character.
*/
void PrintHistogramLine(char aChar, int numInstances)
{
   printf("# of '%c' characters:  ", aChar);
   int x;
   for (x = 0; x < numInstances; ++x)
   {
      printf("*");
   }
   printf("\n");
}