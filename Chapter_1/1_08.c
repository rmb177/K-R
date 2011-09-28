#include <stdio.h>

/**
* Count number of blanks, tabs and newlines.
*/

main()
{
   int numSpaces = 0;
   int numTabs = 0;
   int numNewLines = 0;
   
   char c;
   while ((c = getchar()) != EOF)
   {
      if (c == ' ')
      {
         numSpaces++;
      }
      else if (c == '\t')
      {
         numTabs++;
      }
      else if (c == '\n')
      {
         numNewLines++;
      }
   }
   
   printf("\n\n");
   printf("numSpaces = %d\n", numSpaces);
   printf("numTabs = %d\n", numTabs);
   printf("numNewLines = %d\n", numNewLines);
   printf("\n\n");
}