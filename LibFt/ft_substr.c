/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0005/10/20 09:16:28 by noukan            #+#    #+#             */
/*   Updated: 2023/10/31 09:41:39 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*d;
	char			*void_str;

    if (start >= ft_strlen(s) || len == 0)
        return (ft_strdup(""));
	if (!s)
		return (NULL);
    if (start + len > ft_strlen(s))
        len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
	{
		void_str = (char *)malloc(1);
		if (void_str == NULL)
			return (NULL);
		void_str[0] = '\0';
		return (void_str);
	}
	i = 0;
	d = (char *)malloc(len + 1);
	if (d == NULL)
		return (NULL);
	while (i < len)
	{
		d[i] = s[start + i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
// if len 45 str_len 5
