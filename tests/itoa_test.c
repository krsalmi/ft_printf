#include <stdio.h>
#include "ft_printf.h"

char	*ft_itoa_base_ll_low(unsigned long long value, unsigned int base);

int		main()
{
	unsigned long long value = 1792;
	unsigned int	base = 8;
	char *itoa;

		itoa = ft_itoa_base_ll_low(value, base);
		printf("%s\n", itoa);
	return (0);
}
