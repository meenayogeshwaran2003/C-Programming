#include<stdio.h>
int main()
{
	int a;
	int voters_age = 18;
	printf("enter the age of the canditate:\n");
	scanf("%d",&a);
	int canditate_age = a;
	if(canditate_age>=voters_age)
	{
		printf("the canditate is eligible\n");
	}	else
	{
			printf("the canditate is not eligible\n");
	}
	return 0;
}
