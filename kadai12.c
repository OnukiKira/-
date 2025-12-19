#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	srand(time(0));
	
	int intelligence = (rand() % 20) + 1;
	int stamina = (rand() % (20 -intelligence)) + 1;
	int charisma = (20 - (intelligence + stamina));
	printf("intelligence %d \n", intelligence);
	printf("stamina %d \n", stamina);
	printf("charisma %d \n", charisma);
	
	if (intelligence > stamina && intelligence > charisma)
	{
		printf("Your roll 'mage'");
	}
	if (stamina > intelligence && stamina > charisma)
	{
		printf("Your roll 'knight'");
	}
	if (charisma > intelligence && charisma > stamina)
	{
		printf("Your roll 'thief'");
	}
	
	return 0;
}