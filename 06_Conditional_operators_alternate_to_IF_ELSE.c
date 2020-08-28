#include <stdio.h>

main()
//{
//	int pears = 4;
//
//	// below statement is modified as per number of pears we eat. for 1 pear it waill say "PEAR" more than one pear it will output "PEARS."
//	printf("I ate %i pear%s\n", pears, (pears > 1) ? ("s.") : ("."));
//}

{
	int numPick;

	printf("number from 1 to 10\n");
	scanf(" %d", &numPick);


	printf("the %d %s dvivisible by 2.", numPick, (numPick % 2 == 0) ? ("is") : ("is not"));
	printf("the %d %s dvivisible by 3.", numPick, (numPick % 3 == 0) ? ("is") : ("is not"));
	printf("the %d %s dvivisible by 4.", numPick, (numPick % 4 == 0) ? ("is") : ("is not"));
	printf("the %d %s dvivisible by 5.", numPick, (numPick % 5 == 0) ? ("is") : ("is not"));
	
	return 0;
}