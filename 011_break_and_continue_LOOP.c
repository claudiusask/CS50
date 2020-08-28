#include <stdio.h>

main()
{
	int s;
	for (size_t s = 0; s <= 10 ; s++)
	{
		printf("S is %i\n", s);
		if (s == 4)
		{
			break;
		}
		
	}


	int i;

	for (size_t i = 1; i <= 10; i++)
	{
		if (i % 2 == 1)
		{
			printf("I am odd\n");
		}
		else
		{
			printf("Even up!\n");
		}

			
	}
	printf("**************************************************\n");

	

	for (size_t i = 1; i <= 10; i++)
	{
		if ((i % 2) == 1)
		{
			printf("I am rather odd....\n");
			continue;
		}
	// NO else statement, because of above CONTINUE	
			printf("Even up!\n");
	}
	return 0;
}