#include <stdio.h>

#define MAXLINE 1000	/* maximum line size */

int GetLineWithoutTrailingWhitespace(char line[], int maxline);

/**
 * Strip trailing blanks and tabs from each line and then
 * output only those lines that are not blank.
 */
main()
{
   int len;
   char line[MAXLINE];
   
   int max = 0;
   while ((len = GetLineWithoutTrailingWhitespace(line, MAXLINE)) >= 0)
   {
      if (len > 0)
      {
         printf("%s\n\n", line);
      }
   }
   return 0;
}

/**
 * Read a line, stripped of all trailing whitespace,
 * into s and return length
 */  
int GetLineWithoutTrailingWhitespace(char s[], int lim)
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
   
   /* Now strip away trailing spaces, newlines and tabs */
   /* Skip over null character */
   int newLastIndex = i;
   int foundNonWhitespaceChar = 0;
   i -= 1;
   
   while (i >= 0 && !foundNonWhitespaceChar)
   {
      if ('\n' == s[i] || ' ' == s[i] || '\t' == s[i])
      {
         newLastIndex = i;
         i -= 1;
      }
      else 
      {
         foundNonWhitespaceChar = 1;
      }
   }
   
   s[newLastIndex] = '\0';
   return newLastIndex;
}
