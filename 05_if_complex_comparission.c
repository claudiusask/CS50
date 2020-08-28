#include <stdio.h>

main()
//{
//	char name[10];
//
//	printf("Provide your name \"First Character must be CAPAITAL\"\n");
//	scanf(" %s", name);
//
//	if (((name[0] == 'P') || (name[0] == 'S')) || ((name[0] == 'p') || (name[0] == 's')))
//	{
//		printf("Please take your tickets from Room 01\n");
//	}
//	else
//	{
//		printf("You can take your ticket from here\n");
//	}
//}

{
	char firstName[10];
	int grade;
	int attendence;
	int numOrgs;
	int sports;

	printf("First Name:");
	scanf(" %s", firstName);
	printf("Grades you received:\n");
	scanf(" %d", &grade);
	printf("Average Attendence:\n");
	scanf(" %d", &attendence);
	printf("How many organizations have you joined on campus:\n");
	scanf(" %d", &numOrgs);
	printf("Do You play more than one sports:\n");
	scanf(" %d", &sports);

	// student must be above 95% grade, attended the classes at-least 90%, and either joined 2-Campus ORGs or played 2 or more sports.
	if ((grade >= 95) && (attendence >= 90) && ((numOrgs >= 2) || (sports >= 2)))
	{
		printf("%s you are invited\n", firstName);
	}
	else
	{
		printf("%s GO STUDY! you are not invited\n", firstName);
	}
	return 0;
}