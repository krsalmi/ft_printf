#include <stdio.h>

int	main()
{
	float f = -0.5678;
	int i;
	int d;
	i = (int)f;
	printf("f: %f\n", f);
	printf("i: %d\n", i);

	float b;
	int n = 2;
	b = (float)n;
	printf("f: %d\n", n);
	printf("i: %f\n", b);

	printf("%f\n", 1000000 * 2.0);
	d = 10^6;
	return (0);
}
