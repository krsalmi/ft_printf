/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalmi <ksalmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:56:59 by ksalmi            #+#    #+#             */
/*   Updated: 2020/02/24 13:12:03 by ksalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strnew(size_t size)
{
	char	*new;

	new = (char *)malloc(sizeof(*new) * size + 1);
	if (!new)
		return (NULL);
	ft_bzero(new, size + 1);
	return (new);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*new;

	if (s1)
		i = ft_strlen(s1);
	if (s2)
		j = ft_strlen(s2);
	if (!s1 && s2)
		return (ft_strdup(s2));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!(new = (char *)malloc(sizeof(char) * i + j + 1)))
		return (NULL);
	ft_strcpy(new, s1);
	ft_strcpy((new + i), s2);
	return (new);
}

char	*ft_strchr(const char *s, int c)
{
	char *ret;

	ret = NULL;
	if (!s)
		return (NULL);
	while (*s && *s != c)
		s++;
	if (*s == c)
		ret = (char *)s;
	return (ret);
}

char	*ft_strdup(const char *src)
{
	char	*copy;
	int		i;

	if (!src)
		return (NULL);
	if (!(copy = (char *)malloc(sizeof(*copy) * ft_strlen(src) + 1)))
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (s[start] && i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
