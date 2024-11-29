#include<stdio.h>
int main()
{
	char arr[]="meenayogesh";
	int len = sizeof(arr)/sizeof(char);
	char copy[len];
	for(int i=0;i<len;i++){
		copy[i]=arr[i];
	}
		printf("%s",copy);
	return 0;
}
	
