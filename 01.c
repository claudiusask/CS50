#include <stdio.h>
#include <string.h>

main() 
{
	char name[17] = "Ali";

	printf("Hello %s\n", name);
	
	/* 
	strcpy is avalibale only when added to property of the Project, IDE is syaing to use strcpy_ which is not working for me. 
	Solution Explorer -->> right click the projetc -->> Properties -->> Select All Configuration  with x64-->> Expand C/C++ -->> go to Preprocessor -->>
	and add "_CRT_SECURE_NO_WARNINGS" into Preprocessor Definitions. 
	*/
	strcpy(name, "Ely");
	printf("Hello %s\n", name);

	return 0;
	
}