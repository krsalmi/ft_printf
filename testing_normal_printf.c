#include <stdio.h>

int	main()
{
	printf("Just a normal string\n");
	printf("Printing special \\\  characters \\ %%\n");
	printf("newline\n back\bspace\n");
   	printf("form feed\f\rnew line\n");
	printf("tab\ttab");
	printf("vertical\vtab\n");
	printf("testing percent mark. %%%d\n", 5);
	printf("-----------------\n");
	printf("%c\n", 'z');
	printf("%C\n", 'z');

	char c;
	c = 'a';
	int x;
	x = 6;
	printf("char %c num %d\n", c, x);
	printf("|%0-5d|\n", 11);
	printf("%05d\n", -11);
	printf("%05d\n", 111);
	printf("%05d\n", 111111);
	return (0);
}
