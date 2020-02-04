#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define FORM_SPECIFIERS  "cspdiouxXf"
# include "libft.h"


typedef	struct	s_data
{
	char	*first_arg;
	char	*final;
	char	*specif_area;
	char	*formatted_area;
	int		formatted_len;
	int		spec_field_len;
	size_t	final_len;
}				t_data;

int		ft_printf(const char *format, ...);
void	print_text(t_data *data);
void	cut_specs_and_convert(t_data *data, int start);
void	make_final_str(t_data *data);
void	make_formatting(t_data *data);
#endif
