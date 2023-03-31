#include<stdlib.h>
#include<stdio.h>
char s1[] = "Sam"; // --> initialized data
const char s2[] = "Sandy"; // --> initialized data

int n; // --> uninitialized (bss) data
int main()
{
	int n; // --> stack segement
	static int a = 58; // --> initialized data
	const int b = 25; // --> initialized data
	char *p;
	p = (char *)malloc(sizeof(char)); // --> heap segment
	printf("Memory Layout in C");
	return 0;
}
