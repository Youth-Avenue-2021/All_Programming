#include <stdio.h>
int main()
{
    int idays,months,days;
    printf("Enter days:");
    scanf("%d",&idays);
    months=idays/30;
    days=idays%30;
    printf(" %d months and %d days",months,days);
    return 0;
}