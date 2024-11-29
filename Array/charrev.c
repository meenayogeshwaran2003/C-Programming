#include<stdio.h>

int main()
{
	char name[]= "meenayogesh"; 
	int len = sizeof(name)/sizeof (char);
	for(int i=len; i>=0; i--){
		printf("%c\n",name[i]);
	}
	return 0;
}
