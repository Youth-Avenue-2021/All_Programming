#include<stdio.h>
int main()
{
    int x;
    printf("enter any number:");
    scanf("%d",&x);
    if(x%2==0)
     printf("entered number is even");
    else
     printf("entered number is odd");
    return 0;
}