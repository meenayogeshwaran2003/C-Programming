#include<stdio.h>
int main()
{
	int i = 0;
	int sum=0;
	int arr[5];
	for(i=0;i<5;i++){
		printf("enter the array of numbers:");
		scanf("%d",&arr[i]);
	}
	int j;
	for(j=0;j<5;j++){
		printf("%d\n",arr[j]);
		sum = sum+arr[j];
	}
	return 0;
}
