#include <stdio.h>

main()
{
	//int ctr = 0;
	//int ctrr = 0;
	//int rts = 0;

	//while (ctr < 5)
	//{
	//	printf("counter is at ++%d. %d++\n", ++ctrr, ctr++);
	//}

	//printf("--------------------------\n");

	//while (ctr > 0)
	//{
	//	printf("counter is at --%d. %d--\n", --ctrr, ctr--);
	//}

	//printf("--------------------------\n");

	//// WE can also use rts++ increment out of the printf statement as it is used in other languages.
	//while (rts < 5)
	//{
	//	printf("the rts is at %d\n", rts);
	//	rts++;
	//}
	
	printf("*******************************************************\n\n");

	float num1, num2, result;
	char choice;

	

	do
	{
		printf("Multiply two number below\n\n");
		printf("num1: ");
		scanf(" %f", &num1);
		printf("num2: ");
		scanf(" %f", &num2);

		result = num1 * num2;

		printf("The result is %.2f\n", result);

		printf("More Multiplication?(Y/N)\n");
		printf("Choice: ");
		scanf(" %c", &choice);
			if (choice == 'n')
			{
				choice = 'N';
			}

	} 
	while (choice != 'N' && (choice == 'Y' || choice == 'y'));
	
	//return 0;
}


