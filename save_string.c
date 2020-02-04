/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalmi <ksalmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 17:04:53 by ksalmi            #+#    #+#             */
/*   Updated: 2020/02/03 14:59:11 by ksalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int		ft_printf(const char *format, ...)
{
	t_data data;
	
	data.first_arg = ft_strdup(format);
//	cut_specs_and_convert(&data);
	data.final = data.first_arg;
	print_text(&data);
	return (data.len);
}

int		main()
{
	int i;
	int j;

	i = ft_printf("moi\\\nsulle\a\n");
	ft_putnbr(i);
	printf("\n\n");
	j = printf("moi\\\nsulle\a\n");
	printf("%d", j);
	return(0);
}
