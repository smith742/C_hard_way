#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	while (i < 25)
	{
		printf("%d\n", i);
		i++;
	}

	while (i > 0)
	{
		printf("%d\n", i);
		i--;
	}	
	return 0;
}
