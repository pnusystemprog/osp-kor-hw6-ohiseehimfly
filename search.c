#include <stdio.h>
#include <string.h>
#include "phone.h"

extern struct Contact PhoneBook[];
extern int size;

void searchByName()
{
	char findhname[10];
	int count = 0;

	printf("\n>>Enter a name to search:");
	scanf("%s", findname);
	for(int i = 0; i < size; i++)
	{
		if(strcmp(findname, PhoneBook[i].Name) == 0)
		{
			count = 1;
			printf("%s\t\t%s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
		}
	}
	if(count == 0)  printf("%s is not in the PhoneBook.\n", findname);
	return;
}
