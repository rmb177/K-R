#include <stdio.h>

#define MAXLINE 1000	/* maximum line size */
int GetReversedLine(char line[], int maxline);
void ReverseLine(char line[], int length);

/**
 * Print all lines reversed
 */
main()
{
   int len;
   char line[MAXLINE];
   
   int max = 0;
   while ((len = GetLine(line, MAXLINE)) > 0)
   {
      printf("Reversed line: %s\n\n", line);
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
   s[i] = '\0';

   ReverseLine(s, i);
   return i;
}


/**
 * Reverse the given line
 */
void ReverseLine(char line[], int length)
{
   if (length > 1)
   {
      int startIndex = 0;
      int endIndex = length - 1;

      while (startIndex < endIndex)
      {
         char temp = line[startIndex];
         line[startIndex++] = line[endIndex];
         line[endIndex--]  = temp;
      }
   }
}

