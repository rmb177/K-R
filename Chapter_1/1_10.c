#include <stdio.h>

/**
* Output user's input replacing all tabs as "\t" all backspaces as "\b"
* and all backslashes by "\\".
*/

main()
{
   printf("\n\n");
   
   char c;
   while ((c = getchar()) != EOF)
   {
      if (c == '\t')
      {
         printf("\\t");
      }
      else if (c == '\b')
      {
         printf("\\b");
      }
      else if (c == '\\')
      {
         printf("\\\\");
      }
      else
      {
         printf("%c", c);
      }
   }
   
   printf("\n\n");
}