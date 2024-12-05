#include<stdio.h>
#include<math.h>
int main()

{
	int arr[6];
	float mean = 0;
	float xdash[6];
	int xsq[6];
	int x = 0;
	float result1;
	float result2;
	printf("enter five numbers to find the standard deviation:\n");
	for (int i = 0; i <5;i++){
		scanf("%d",&arr[i]);
		if(i<4){
			printf("next value\n");
		}
	}
	for(int j = 0; j <5;j++){
		mean = mean+arr[j];
	}
	mean = mean / 5;
	for(int k = 0; k < 5; k++){
		xdash[k] = arr[k]-mean;
	}
	for(int l = 0; l < 5;l++){
		xsq[l] = xdash[l] * xdash[l];
	}

	for (int m = 0;m < 5;m++){
		x = x+xsq[m];
	}
	result1 = x / 4;
	result2 = sqrt(result1);

	printf("the standard deviation fot the above number is:%0.2f\n",result2);
	return 0;
}

