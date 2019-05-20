#include <stdio.h>
#include <string.h>
#include "phone.h"

static char password[11] = "qwerty1234";

extern struct Contact PhoneBook[];
extern int size;

void registerPhoneData()
{
	char pw[15];
	int count = 0;

	while(1)
	{
		printf("\nPassword:");
		scanf("%s", pw);

		if(strcmp(pw, password) == 0)  break;
		else  err_count ++;

		if(count == 1)  printf(">>Not Matched \n");
		else if(count == 2)  printf(">>Not Matched( 2 times) \n");
		else if(count == 3)
		{
			printf(">>Not Matched(3 times) \n");
			printf(">>You are not allowed to access PhoneBook.\n");
			return;
		}
	}
	
	printf("\nNew User Name:");
	scanf("%s", PhoneBook[size].Name);
	printf("PhoneNumber:");
	scanf("%s", PhoneBook[size].PhoneNumber);
	size++;

	printf("Registered...\n");
	return;
}
