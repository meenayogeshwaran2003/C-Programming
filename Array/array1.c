#include<stdio.h>

int main()
{
	int arr[5];
	for(int i=0;i<5;i++){
		printf("enter the number:");
		scanf("%d",&arr[i]);
	}
	int j;
	printf("the numbers in the array are:\n");
	for(j=0;j<5;j++){
		printf("%d\n",arr[j]);
	}
	return 0;
}
