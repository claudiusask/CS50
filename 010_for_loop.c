#include <stdio.h>

main()
{
		//Build the variables.
		char movieName[40], favorite[40], least[40];
		int ranking, yearMovies, favRating, leastRating;

		favRating = 0;
		leastRating = 10;

		//Ask the user for how many movies they watched this year
		do
		{
			printf("How many movies you watched this year: ");
			scanf(" %d", &yearMovies);
			
			if (yearMovies < 1)
			{
				printf("REALLY!!!\n");
			}

		} while (yearMovies <= 0);
		
		
		//Ask the user for favorite ranking
		for (size_t i = 0; i < yearMovies; i++)
		{

			printf("Name of favorite movie: ");
			scanf(" %s", movieName);
			printf("How would you like to rank it from 0 - 10: ");
			scanf(" %d", &ranking);
			//printf("You ranked \"%s\" as %d \n", movieName, ranking);

			//show them their most favorite move
				if (ranking > favRating)
				{
					strcpy(favorite, movieName);
					favRating = ranking;
				}
			

				if (ranking < leastRating)
				{
					strcpy(least, movieName);
					leastRating = ranking;
				}
		}
		
		printf("Your favorite Movie is %s\n", favorite);
		printf("Your least favorite Movie is %s\n", least);

		return 0;

}