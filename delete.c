#include <stdio.h>
#include <string.h>
#include "phone.h"

extern struct Contact PhoneBook[];
extern int size;

void deleteByName()
{
	char findname[10];
	int count = 0;

	printf("\n>>Enter a name to search:");
	scanf("%s", findname);

	int index = 0;
	while(1)
	{
		if(strcmp(findname, PhoneBook[index].Name) == 0)
		{
			count = 1;
			printf("%s is deleted...\n", PhoneBook[index].Name);
			for(int i = index; i < size; i++)
			{
				strcpy(PhoneBook[i].Name, PhoneBook[i+1].Name);
				strcpy(PhoneBook[i].PhoneNumber, PhoneBook[i+1].PhoneNumber);
			}
			size = size - 1;
			index = -1;
		}
		index ++;
		if(index == size)  break;
	}

	if(count == 0)  printf("%s is not in the PhoneBook.\n", findname);

	return;
}
