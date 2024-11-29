#include<stdio.h>

int main()
{
	char arr[]="meenayogesh";
	int len = sizeof(arr)/sizeof(char);
	for(int i=0;i< len;i++){
		printf("%c\n",arr[i]);
	}
	return 0;
}

