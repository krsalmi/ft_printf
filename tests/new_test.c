#include <stdio.h>

int	main()
{
	char a;
	a = 'r';

	printf("%5%");
	printf("\n");
	printf("%-5%");
	printf("\n");
	printf("0 2d:|%0 2d|\n", 6);
	printf(" -c:|% -c|\n", a);
	printf("\n");
	printf("#o, 78:|%#o|\n", 78);
	printf("#4o, 78:|%#4o|\n", 78);
	printf("#5o, 78:|%#5o|\n", 78);
	printf("#.4f, 678.1234:|%#.4f|\n", 678.1234);
	printf(".4f, 678.1234:|%.4f|\n", 678.1234);
	printf("#-6o, 78:|%-#6o|\n", 78);
	printf("#-6o, 0:|%-#6o|\n", 0);


	return (0);
}
