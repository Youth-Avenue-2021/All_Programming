#include <stdio.h>
int main()
{
   int x=5,y=3,a;
   printf("before swapping: x = %d, y = %d",x,y);
   a=x;
   x=y;
   y=a;
   printf("\n after swapping: x = %d, y = %d",x,y); 
    return 0;
}
