#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int password(int password_length)
{
	password_length = 8;
	char list[100] = "1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
	
	srand(time(NULL));
	for(int i = 0; i < password_length; i++)
	{
    		printf("%c", list[rand() % (sizeof list - 1)]);
	}
}

int main()
{
	password(password_length);
	return 0;
}
