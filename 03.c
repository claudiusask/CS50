#include <stdio.h>

main()
{
	int scale;

	printf("On the scale of 1 - 10 how was your experince?\n");
	scanf(" %d", &scale);

	if (scale >= 8)
	{
		printf("Good Thanks\n");
	}
	else if (scale >= 4)
	{
		printf("We will try to make it better\n");
	}
	else if (scale >= 3)
	{
		printf("Please use our contact-us form to give suggestions, Thanks\n");
	}
	else
	{
		printf("Sorry to hear that, please contact-us, so we can improve our service\n");
	}
	//return 0;

	int tester;

	printf("provide tester number: \n");
	scanf(" %d", &tester);

	if (tester >= 5)
	{
		printf("Customer service check it please\n");
	}
	else
	{
		printf("IMEDIATELY\n");
	}

	return 0;
}