#include <stdio.h>
#include <stdlib.h>
#include <linux/changeschedule.h>

int main (int argc, char * argv[]) 
{
	if (argc != 2)
	{
		printf("Program must have 1 arguement passed\n");
		exit(1);
	}

	int schedule = atoi(argv[1]);
	if (schedule != 0 && schedule != 1)
	{
		printf("Arguement passed is not 0 or 1\n");
		exit(2);
	}


	printf("Priority given by user: %d\n", schedule);
	changeschedule(schedule);
	printf("System call has been made\n");

	return 0;
}
