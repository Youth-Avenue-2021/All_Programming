#include <stdio.h>
void encrypt(char *c)
{
    char *ptr = c;
    while(*ptr != '\0')
    {
         *ptr = *ptr+1;        //if a is the decode then b is the code  ptr++;
        
    }
}


int main()
{
   char str[]= "Vanshika";
   encrypt(str);
   printf("The encrypted string is %s",str);
   return 0;
}
