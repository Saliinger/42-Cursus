/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:06:01 by anoukan           #+#    #+#             */
/*   Updated: 2023/11/01 06:47:11 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;
	char	*cstr;
	char	*cto_find;

	i = 0;
	cstr = (char *)str;
	cto_find = (char *)to_find;
	if (cto_find[0] == '\0')
		return (cstr);
	while (i < len && cstr[i] != '\0')
	{
		if (!cstr)
			return (NULL);
		n = i;
		j = 0;
		while (cstr[n] == cto_find[j] && cstr[n] && cto_find[j] && n < len)
		{
			n++;
			j++;
		}
		if (cto_find[j] == '\0')
			return (cstr + i);
		i++;
	}
	return (NULL);
}
