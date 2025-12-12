#include <stdio.h>
#include <string.h>
#include <ctype.h>

void check_password_strength(char password[])
{
	int is_strong = 1;
	int is_long_enough = 0;
	int has_upper = 0;
	int has_lower = 0;
	
	size_t length = strlen(password);
	if (length >= 8)
	{
		is_long_enough = 1;
	}
	else
	{
		is_strong = 0;
	}
	
	for (int i = 0; i < length; i++)
	{
		if (isupper(password[i]))
		{
			has_upper = 1;
		}
		if (islower(password[i]))
		{
			has_lower = 1;
		}
	}
	
	if (!(has_upper && has_lower))
	{
		is_strong = 0;
	}
	
	if (is_strong && is_long_enough && has_upper && has_lower)
	{
		printf("This password is strong!\n");
	}
	else
	{
		printf("This pasword is weak. Improvement points:\n");
		
		if (!is_long_enough)
		{
			printf("- Must be **at least 8 characters**.\n");
		}
		if (!has_upper)
		{
			printf("- Please include **upper letter**.\n");
		}
		if (!has_lower)
		{
			printf("- Please include **lower letter**.\n");
		}
	}
}

int main()
{
	char password[100];
	
	printf("Please enter your password.");
	if (scanf("%s", password) != 1)
	{
		return 1;
	}
	
	check_password_strength(password);
	
	return 0;
}