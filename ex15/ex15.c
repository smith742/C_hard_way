#include <stdio.h>

int main(int argc, char *argv[])
{
	//create two arrays that we care about
	int ages[] = {20, 25, 23, 33, 32};
	char *names[] = {
		"Joe", "Alan",
		"Fred", "Cid", "Josh"};

	//safely get the size of ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	//first way using indexing
	for (i = 0; i < count; i++)
	{
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}

	printf("---\n");

	//set up the pointers to the start of the arrays
	int *cur_age = ages;
	char **cur_name = names;

	//second way using points
	for (i = 0; i < count; i++)
	{
		printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
	}

	printf("---\n");

	//third way, points are just arrays
	for (i = 0; i < count; i++)
	{
		printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
	}

	printf("---\n");

	//fourth way with pointers in a stupid complex way
	for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++)
	{
		printf("%s lived %d so far.\n", *cur_name, *cur_age);
	}

	return 0;
}
