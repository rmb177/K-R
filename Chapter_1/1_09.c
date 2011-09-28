#include <stdio.h>

/**
* Output users input replacing all consecutive spaces with a single space
*/

main()
{
   printf("\n\n");
   
   char c;
   int lastCharWasSpace = 0;
   while ((c = getchar()) != EOF)
   {
      if (c == ' ')
      {
         if (!lastCharWasSpace)
         {
            printf("%c", c);
         }
         lastCharWasSpace = 1;
      }
      else
      {
         printf("%c", c);
         lastCharWasSpace = 0;
      }
   }
   
   printf("\n\n");
}