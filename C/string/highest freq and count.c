#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[100];
	int ch_fre[255];
	int i=0,max;
	int ascii;

	printf("input the string:\n");
	gets(str);
	
	for(i=0;i<255;i++)
	{
	 ch_fre[i]=0;
	}

	i=0;
	while(str[i]!='\0')
	{
	 ascii=(int)str[i];
	 ch_fre[ascii]+=1;
	 i++;
	}

	max=0;
	for(i=0;i<255;i++)
	{
	 if(i!=32)
	 {
	  if(ch_fre[i]>ch_fre[max])
	  max=i;
	 }
	}

	printf("\n the highest frequency of character %c \n",max);
	printf("\n %c appears %d number of times\n\n",max,ch_fre[max]);
	getch();
}
