#include <stdio.h>
#include <string.h>
int main(void){
	char tamura[] = "Mad Tamurasan";
	int i;
	printf("The string '%s' is %lu characters long.\n", tamura, strlen(tamura));
	for (i = 0; i <= strlen(tamura); i++)
	    printf("%d\n", i);
	return 0;
}