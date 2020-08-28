#include <stdio.h>
#define YEAR 2020

main() 
{
	int yearBorn, age;

	printf("What year were you born in?\n");
	scanf(" %d", &yearBorn);

	// IF statements examples

	if (yearBorn > YEAR)
	{
		printf("Really? You haven't been born yet?\n");
		printf("Good for coming back from future\n");
		
		//below will ask user once more for correct past year before main YEAR.
		//printf("What year were you born in?\n");
		//scanf(" %d", &yearBorn);
	}
	else
	{
		age = YEAR - yearBorn;
		printf("\nSo this year you will turn %d on your birthday!\n", age);

		if ((yearBorn % 4) == 0)
		{
			printf("\nYou were born in a leap year--Cool!\n");
		}
		else
		{
			printf("Cool so were born in %d", yearBorn);
		}
	}
	return 0;
}