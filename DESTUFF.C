#include<stdio.h>
#include<conio.h>
#define MAXSIZE 100
void main()
{
   char *p,*q,temp;

   char stuff[MAXSIZE];
   char destuff[MAXSIZE];
   int count =0;
   printf("\Enter the stuffed character string ");
   scanf("\n%s",stuff);
   p=stuff;
   q=destuff;
   while(*p!='\0')
   {
     if(*p=='0')
     {
	*q=*p;
	q++;
	p++;
	}
     else
     {
	while(*p=='1' && count!=5)
	{
	   count++;
	   *q=*p;
	   q++;
	   p++;
	}
	if(count==5)
	{
	  p++;
	  }
	count=0;
	}
     }
     *q='\0';
     printf("\n The destuffed character string is ");
     printf("\n%s\n",destuff);
     getch();
     }