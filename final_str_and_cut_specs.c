/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut_specs_and_convert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalmi <ksalmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 17:45:07 by ksalmi            #+#    #+#             */
/*   Updated: 2020/02/03 17:06:35 by ksalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	cut_specs_and_convert(t_data *data, int start)
{
	int		i;
	size_t	spec_len;

	i = start;
	spec_len = 1;
	while (data->first_arg[i] && ft_isalpha(data->first_arg[i]) == 0)
	{
		spec_len++;
		i++;
	}
	if (ft_strchr(FORM_SPECIFIERS, data->first_arg[i]))
	{
		data->specif_area = ft_strsub(data->first_arg, start, spec_len);
		data->spec_field_len = (int)spec_len;
		make_formatting(data);
	}
}

void	make_final_str(t_data *data)
{
	int		i;
	int		j;
	char	*temp;
	
	j = 0;
	i = 0;
	while (data->first_arg[i])
	{
		if (data->first_arg[i] == '%' && data->first_arg[i + 1] != '%')
		{
			temp = ft_strdup(data->final);
			if (data->final)
				free(data->final);
			data->final = ft_strjoin(temp, (ft_strsub(data->first_arg, j, (size_t)(i - j))));
			cut_specs_and_convert(data, i);
			temp = ft_strdup(data->final);
			free(data->final);
			data->final = ft_strjoin(temp, data->formatted_area);
			free(data->formatted_area);
			j = i + data->spec_field_len;
			i = j - 1;
		}
		i++;
	}
	temp = ft_strdup(data->final);
	free(data->final);
	data->final = ft_strjoin(temp, (ft_strsub(data->first_arg, j, (size_t)(i - j))));
}
