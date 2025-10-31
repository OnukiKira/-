#include <stdio.h>

int main(void)
{
	int diff;
	char large; // uppercase
	char small; // lowercase
	
	printf("Please enter lowercase alphabets>>>");
	scanf("%c", &small);
	diff = 'A' - 'a';     // 'A'と'a'との文字の差
	large = small + diff; // convert to uppercase
	
	printf("lowercase is %c   uppercase is %c\n", small, large);
	
	return 0;
}