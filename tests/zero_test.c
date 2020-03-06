#include <stdio.h>
#include "ft_printf.h"

int	main()
{
	t_data data;

	char	*num;
	num = (char*)malloc(sizeof(char) * 4);
	ft_strcpy(num, "1f");
	data.formatted_area = num;
	data.formatted_len = 2;
	data.flag_justify = 0;
	data.flag_hash = 1;
	data.form_specifier = 'x';
	data.width_num = 6;
	put_hash_flag(&data);
	printf("|%s|\n", data.formatted_area);
	printf("|%d|\n", data.formatted_len);
	return (0);
}
