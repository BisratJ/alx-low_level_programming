#include "main.h"
/**
 * strcat: concatinates two strings
 * @dest: destination 
 * @src: source
 * Return: returns the pointer to dest 
 */

char *_strcat(char *dest, char *src){
  int count = 0, count2 = 0;
  while(*(dest + count) =! 0 )
    {
      count++;
    }
  while(count2 >= 0)
    {
     *(dest + count) = *(src + count)
      if(*(src + count2)== '\0')
        break;
        count++;
        count2++;
    }
  return (dest);
}
