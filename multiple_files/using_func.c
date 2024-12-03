#include<stdio.h>
int math(int,int);
int main()
{
	int a,b,result;
	printf("enter the number to doo the operation:\n");
	scanf("%d",&a);
	printf("enter the secondary number to do the operation:\n");
	scanf("%d",&b);
	result = math(a,b);
	printf("%d\n",result);

	return 0;
}
	int math(int x,int y)
{
	return x+y;
}
