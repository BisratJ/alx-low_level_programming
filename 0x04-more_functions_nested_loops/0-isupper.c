#include "main.h"
#include <stdio.h>

/**
* main - check the code
* Return: Always 0.
*/

int main(int c){
 
  char upper = 'A';
  int isupper = 0;
  for(; upper <= 'Z'; upper++){
   
     if(c == upper)
       {
           isupper = 1;
           break;
       }
   }
  return(isupper);
}
