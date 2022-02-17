#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int max_arg = 4;
	if(argc == 1)
	{
		printf("You only have one argument.  That's not enough.\n");
	}
	else if(argc > 1 && argc < max_arg)
	{
		printf("Here's your arguments.\n");
		
		for(i = 0; i < argc; i++)
		{
			printf("%s ", argv[i]);
		}
	printf("\n");
	}
	else
	{
		printf("You have too many arguments. You must have fewer than %d arguments.\n", max_arg);
	}

	return 0;
}
