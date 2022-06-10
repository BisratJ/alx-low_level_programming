
#includ "main.h"
#include <stdio.h>

/**
 * _isupper - A function that checks for digit.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */

int main(int c)
 
int digit;
int isdigit = 0;
 
for(; digit < = 9; digit++)
{
    if(c == digit)
     {
      isdigit = 1;
      break; 
     }   
   }
   return(isdigit);
}
