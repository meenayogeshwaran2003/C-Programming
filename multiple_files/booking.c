#include<stdio.h>
void add ();
int sub(int,int);
int main()
	{
		int a,b,ans;
		printf("enter the number:\n");
		scanf("%d\n",&a);
		printf("enter another number:\n");
		scanf("%d\n",&b);
		add();
		ans = sub(a,b);
		printf("the answer is:\n");
		printf("%d\n",ans);

	return 0;
	}
	void add()
{
	int a,b,c;
	a=35;
	b=20;
	c=a+b;
	printf("the answer is:\n");
	printf("%d\n",c);
}
	int sub(int x,int y)
{
	return x-y;
}
