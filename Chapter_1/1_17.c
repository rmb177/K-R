#include <stdio.h>

#define MAXLINE 1000	/* maximum line size */
#define MIN_LINE_LENGTH 80
int GetLine(char line[], int maxline);

/**
 * Print all lines longer than 80 characters
 s*/
main()
{
   int len;
   char line[MAXLINE];
   
   int max = 0;
   while ((len = GetLine(line, MAXLINE)) > 0)
   {
      if(len > MIN_LINE_LENGTH)
      {
         printf("Line: %s\n\n", line);
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
   int i;
   
   /* There was a bug in original K&R code, need to save two spaces for */
   /* new line and null character */
   for (i = 0; i < lim - 2 && (c = getchar()) != EOF && c != '\n'; ++i)
   {
      s[i] = c;
   }
   
   if (c == '\n')
   {
      s[i] = c;
      ++i;
   }
   s[i] = '\0';
   return i;
}

