#include<stdio.h>
int main()
{
   int num,a,b;
   printf("enter the number:\n");
   scanf("%d",&num);
   a=1;
   while (a<=num){
	b=1;
	   while(b<=a){	   
	   printf("*");
	   b++;
	   }
	   printf("\n");
	   a++;
   }
	return 0;
   }
