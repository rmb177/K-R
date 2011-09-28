#include <stdio.h>

/**
* Print out a histogram for the length of words in the given input.
* Histogram is printed out horizontally and any words over length 20
* are just considered length 20.
*/

#define kMaxWordLength 20

main()
{
   printf("\n\n");
   
   char c = 0;
   int wordLengthCounts[kMaxWordLength] = {0};
   int wordLength = 0;
   int lastCharWasSpace = 0;
   
   while ((c = getchar()) != EOF)
   {
      if (c == ' ' || c == '\n' || c == '\t')
      {
         if (wordLength > 0)
         {
            (wordLength > kMaxWordLength) ? wordLengthCounts[kMaxWordLength - 1]++ : wordLengthCounts[wordLength - 1]++;
         }
         wordLength = 0;
      }
      else
      {
         wordLength++;
      }
   }
   
   /* Print out histogram values */
   int x;
   int y;
   for (x = 0; x < kMaxWordLength; ++x)
   {
      printf("# of words of length %2d:  ", x + 1);
      for (y = 0; y < wordLengthCounts[x]; ++y)
      {
         printf("*");
      }
      printf("\n");
   }
   
   printf("\n\n");
}