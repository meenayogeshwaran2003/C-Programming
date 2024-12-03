#include<stdio.h>
int main()
{
      	int num1,num2;
	printf("enter a number:\n");
	scanf("%d",&num1);
	printf("enter another number to compare;\n");
	scanf("%d",&num2);
	{
		if(num1<num2)
			printf("the greater number is: %d \n",num2);
		else
			printf("the greater number is: %d \n",num1);
	}
	return 0;
}
