#include <stdio.h>
#include <stdlib.h>
#include <linux/changeuserpri.h>

int main (int argc, char * argv[]) 
{
	if (argc != 2)
	{
		printf("Program must have 1 arguement passed\n");
		exit(1);
	}

	int priority = atoi(argv[1]);
	if (priority != 1 && priority != 2)
	{
		printf("Arguement passed is not 1 or 2\n");
		exit(2);
	}

	printf("Priority given by user: %d\n", priority);
	changeuserpri(priority);
	printf("System call has been made\n");

	return 0;
}
