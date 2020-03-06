#include "ft_printf.h"
#include <stdio.h>

int		main()
{
	char *field;
	t_data	data;

	field = "0 +45.43hhf";
	data.specif_area = field;
	data.spec_len = 11;
	data.spec_i = 0;

	read_specs(&data);

	printf("flag_plus_space:%d\n", data.flag_plus_space);
	printf("flag_zero:%d\n", data.flag_zero);
	printf("precision:%d\n", data.precision);
	printf("width_num:%d\n", data.width_num);
	printf("formspecifier:%c\n", data.form_specifier);
	return (0);
}
