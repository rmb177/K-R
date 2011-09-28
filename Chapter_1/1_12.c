#include <stdio.h>

/**
* Output input one word/line
*/

main()
{
   printf("\n\n");
   
   char c = 0;
   int lastCharWasSpace = 0;
   while ((c = getchar()) != EOF)
   {
      if (c == ' ' || c == '\n' || c == '\t')
      {
         if (!lastCharWasSpace)
         {
            printf("\n");
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
