 // usin return with arguent function

#include<stdio.h>

int sum(int,int,int);//declaring fuunction

int sum(int x,int y,int result){//defining function
	result= x+y;
	return result;
	}
int main()
{
	int a,b,result;
	printf("enter the number:\n");
       scanf("%d",&a);
       printf("enter another number:\n"); 
       scanf("%d",&b);
       printf("\n");
         result= sum(a,b,result);
    printf("the answer is:%d\n",result	);
    }    
