#include<stdio.h>

int main()
{
	int num;
	printf("enter the number to get the factorial\n");
	scanf("%d",&num);
	int i = 1;
	int factorial = 1;
	while(i<=num){
		factorial = factorial*i;
		i++;
	}
         printf("the factorials are:%d\n",factorial);
	 return 0;
}
