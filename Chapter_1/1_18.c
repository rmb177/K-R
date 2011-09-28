#include <stdio.h>

#define MAXLINE 1000	/* maximum line size */

int GetLine(char line[], int maxline);

/* print longest input line */
main()
{
   int len;
   char line[MAXLINE];
   char longest[MAXLINE];
   
   int max = 0;
   while ((len = GetLine(line, MAXLINE)) > -1)
   {
      if (len > 0)
      {
         printf("%s", line)
      }
   }
   return 0;
}

/**
 * Read a line into s and return length
 */ 
int GetLine(char s[], int lim)
{
   int c;
   int i = 0;
   
   for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
   {
      s[i] = c;
   }
   
   if (0 == i && c == EOF)
   {
      i = -1
   }
   else if (c == '\n')
   {
      s[i] = c;
      ++i;
      s[i] = '\0';
   }
   return i;
}
