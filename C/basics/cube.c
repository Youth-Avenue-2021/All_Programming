#include <stdio.h>
#define cube(x) (x*x*x)
int main()
{
    int a,cube;
    printf("enter a number:");
    scanf("%d",&a);
    cube=cube(a);
    printf("\n cube of %d is %d",a,cube);
    return 0;
}
