#include <stdio.h>

main()
{
	int ctr = 0;
	int ctrr = 0;

	printf("counter is at %d. %d\n", ++ctrr, ctr++);
	printf("counter is at %d. %d\n", ++ctrr, ctr++);
	printf("counter is at %d. %d\n", ++ctrr, ctr++);
	printf("counter is at %d. %d\n", ++ctrr, ctr++);
	printf("counter is at %d. %d\n", ++ctrr, ctr++);
	printf("Decrement...................\n");
	printf("counter is at %d. %d\n", --ctrr, ctr--);
	printf("counter is at %d. %d\n", --ctrr, ctr--);
	printf("counter is at %d. %d\n", --ctrr, ctr--);
	printf("counter is at %d. %d\n", --ctrr, ctr--);
	printf("counter is at %d. %d\n", --ctrr, ctr--);
	printf("counter is at %d. %d\n", --ctrr, ctr--);

	return 0;
}