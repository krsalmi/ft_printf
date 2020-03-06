#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	float a;
	char	*b;
	a = 2.54698;
	
	b = ft_itoa_double(a, 0);
	printf("orig float:|%f|\n", a);
	printf("new float:|%s|\n", b);
	return (0);
}
