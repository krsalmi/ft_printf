/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_formatting.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalmi <ksalmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 16:23:45 by ksalmi            #+#    #+#             */
/*   Updated: 2020/02/03 16:44:51 by ksalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	make_formatting(t_data *data)
{
	char	text[] = "FORMATTING DONE";
	char	*test;

	test = ft_strdup(text);
	data->formatted_area = test;
}
