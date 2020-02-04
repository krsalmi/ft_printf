/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_text.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalmi <ksalmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 16:52:04 by ksalmi            #+#    #+#             */
/*   Updated: 2020/01/29 17:21:32 by ksalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		print_text(t_data *data)
{
	int	i;

	i = 0;
	data->len = 0;
	while (data->final[i])
	{
		ft_putchar(data->final[i]);
		data->len++;
		i++;
	}
}
