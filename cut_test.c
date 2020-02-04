#include "ft_printf.h"
#include <stdio.h>
int		main()
{
	t_data data;

	data.first_arg = ft_strdup("moi % -5d joo %04.f loppu");
	make_final_str(&data);
	printf("%s\n", data.final);
	return (0);
}
