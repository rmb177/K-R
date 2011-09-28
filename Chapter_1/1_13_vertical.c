#include <stdio.h>

 /**
* Print out a histogram for the length of words in the given input.
* Histogram is printed out vertically and any words over length 20
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
   
   /* Get the highest word count */
   int highestWordCount = 0;
   int x;
   for (x = 0; x < kMaxWordLength; ++x)
   {
      if (wordLengthCounts[x] > highestWordCount)
      {
         highestWordCount =  wordLengthCounts[x];
      }
   }
      
   /* Print out histogram values */  
   for (x = highestWordCount; x > 0 ; --x)
   {
      int y;
      for (y = 0; y < kMaxWordLength; ++y)
      {
         if (wordLengthCounts[y] >= x)
         {
            printf(" * ");
         }
         else
         {
            printf("   ");
         }
      }
      printf("\n");
   }
   
   // Print out column labels
   for (x = 0; x < kMaxWordLength; ++x)
   {
      printf("%2d ", x);
   }
   
   printf("\n\n");
}
