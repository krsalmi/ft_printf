/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_formatting.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalmi <ksalmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 16:23:45 by ksalmi            #+#    #+#             */
/*   Updated: 2020/03/05 16:01:32 by ksalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_data	*make_formatting_2(t_data *data)
{
	if (data->form_specifier == 'c')
		c_formatting(data);
	if (data->form_specifier == 's')
		s_formatting(data);
	if (data->form_specifier == 'p')
		p_formatting(data);
	if (data->form_specifier == 'b')
		b_formatting(data);
	return (data);
}

t_data			*make_formatting(t_data *data)
{
	if (data->flag_asterisk)
		put_asterisk_flag(data);
	make_formatting_2(data);
	if (data->form_specifier == 'd' || data->form_specifier == 'i')
		di_formatting(data);
	if (data->form_specifier == 'o')
		o_formatting(data);
	if (data->form_specifier == 'u')
		u_formatting(data);
	if (data->form_specifier == 'x' || data->form_specifier == 'X')
		x_formatting(data);
	if (data->form_specifier == 'f')
		f_formatting(data);
	if (data->form_specifier == '%')
	{
		data->formatted_area = ft_strdup("%");
		data->formatted_len = 1;
	}
	else if (!ft_strchr(FORM_SPECIFIERS, data->form_specifier) &&
			data->form_specifier != '%')
		error(-1);
	return (data);
}
