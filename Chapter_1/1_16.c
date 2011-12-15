#include <stdio.h>

#define MAXLINE 1000	/* maximum line size */

int GetLine(char line[], int maxline);


/**
 * Print out up to 999 characters of each line along with its length
 */
main()
{
   int len;
   char line[MAXLINE];
   
   int max = 0;
   while ((len = GetLine(line, MAXLINE)) > 0)
   {
      printf("Line length = %d\n", len);
      printf("Line: %s\n\n", line);
   }

   return 0;
}

/**
 * Read a line into s and return length
 */ 
int GetLine(char s[], int lim)
{
   int c;
   int i;
   
   for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
   {
      if (i < lim - 1)
      {
         s[i] = c;
      }
   }
   
   if (i < lim - 1)
   {
      s[i] = '\0';
   }
   else 
   {
      s[lim - 1] = '\0';
   }

   return i;
}

