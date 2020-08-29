#include <stdio.h>
#include <stdlib.h>

main()
{
	int choice1;
	int choice2;

	printf("Please select:\n");
	printf("1. USA\n");
	printf("2. Portugal\n");
	printf("3. India\n");
	printf("4. Quit\n");

	do
	{
		printf("\nEnter your choice ");
		scanf(" %d", &choice1);
		switch (choice1)
		{
		case (1):
		{
			printf("\nWhat would you like to see?\n");
			printf("\n1. popular three games\n");
			printf("\n2. Country code and UTC time\n");
			printf("\n3. Continent\n");
			printf("\n4. Leader\n");
			printf("\n5. Quit\n");

			printf("\nmake a choice: ");
			scanf(" %d", &choice2);

			if (choice2 == 1)
			{
				printf("Baketball\n");
				printf("Baseball\n");
				printf("Nascar\n");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 2)
			{
				printf("001 or +1\n");
				printf("Time is UTC -7\n");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 3)
			{
				printf("North America");
				printf("Discovered between 15th to 16th Century");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 4)
			{
				printf("Donald J. Trump");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 5)
			{
				exit(1);
			}
			else
			{
				printf("\nNot a valid choice\n");
				break;
			}
		}
		case (2):
		{
			printf("\nWhat would you like to see?\n");
			printf("\n1. popular three games\n");
			printf("\n2. Country code and UTC time\n");
			printf("\n3. Continent\n");
			printf("\n4. Leader\n");
			printf("\n5. Quit\n");

			printf("\nmake a choice: ");
			scanf(" %d", &choice2);

			if (choice2 == 1)
			{
				printf("Football\n");
				printf("Formula Racing cars\n");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 2)
			{
				printf("0034 or +34\n");
				printf("Time is UTC 00\n");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 3)
			{
				printf("Europe (Southern)");
				printf("Human's have been living in Europe\n");
				printf("for a at least 30 to 40 thousand years");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 4)
			{
				printf("JosephXYZ");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 5)
			{
				exit(1);
			}
			else
			{
				printf("\nNot a valid choice\n");
				break;
			}

		}
		case (3):
		{
			printf("\nWhat would you like to see?\n");
			printf("\n1. popular three games\n");
			printf("\n2. Country code and UTC time\n");
			printf("\n3. Continent\n");
			printf("\n4. Leader\n");
			printf("\n5. Quit\n");

			printf("\nmake a choice: ");
			scanf(" %d", &choice2);

			if (choice2 == 1)
			{
				printf("Cricket\n");
				printf("Football\n");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 2)
			{
				printf("0091 or +91\n");
				printf("Time is UTC +5.5\n");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 3)
			{
				printf("Asia (SubContinent)");
				printf("Human's have been living in this region\n");
				printf("for hundren thousands of years");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 4)
			{
				printf("Moddi-Racist");
				printf("\n\n\n");
				break;
			}
			else if (choice2 == 5)
			{
				exit(1);
			}
			else
			{
				printf("\nNot a valid choice\n");
				break;
			}

		}
		case (4):
		{
			exit(1);
		}
		default:
			printf("\n%d This is not a Valid choice.\n", choice1);
			printf("\nTry again.\n");

			break;
		}


	}
		while ((choice1 < 1) || (choice1 > 4));
		return 0;

}