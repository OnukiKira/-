#include <stdio.h>

int main()
{
	int a;
	printf("How much tar is there?");
	scanf("%d", &a);
	int b;
	printf("How much nicotine is there?");
	scanf("%d", &b);
	
	if (a < 8 , b < 10)
	{
		printf("The cigarette is light");
	}
	
	else if (8 <= a < 14 , 10 <= b <= 20)
	{
		printf("The cigarette is of average weight");
	}
	
	else
	{
		printf("The cigarette is heavy");
	}
	
	
	return 0;
	
}