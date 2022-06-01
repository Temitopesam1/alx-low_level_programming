#include <stdio.h>
#include <conio.h>

int main(void) {
	
	clrscr();
	printf("Size of a char: %2d byte(s)\n", sizeof(char));
	printf("Size of an int: %2d byte(s)\n", sizeof(int));
	printf("Size of a long int: %2d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %2d byte(s)\n", sizeof(long long));
	printf("Size of a float: %2d byte(s)\n", sizeof(float));
	getch();
	return 0;
}
