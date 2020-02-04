/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut_specs_and_convert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalmi <ksalmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 17:45:07 by ksalmi            #+#    #+#             */
/*   Updated: 2020/02/03 15:15:08 by ksalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	cut_specs_and_convert(t_data *data)
{
	int		i;
	size_t	spec_len;
	int		start;

	i = 0;
	spec_len = 1;
	while (data->first_arg[i])
	{
		if (data->first_arg[i] == '%' && data->first_arg[i + 1] != '%')
		{
			start = i;
			while (data->first_arg[i] && ft_isalpha(data->first_arg[i]) == 0)
			{
				spec_len++;
				i++;
			}
			if (ft_strchr(FORM_SPECIFIERS, data->first_arg[i]))
			{
				data->specif_area = ft_strsub(data->first_arg, start, spec_len);
				break ;
			}
		}
		i++;
	}
	ft_putstr(data->specif_area);
}
