# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: anoukan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 13:14:31 by anoukan           #+#    #+#              #
/*   Updated: 2023/10/16 14:09:18 by anoukan          ###   ########.fr       */
#                                                                              #
# **************************************************************************** #
char	ft_strcpy(char *dest, char *str)
{
	int	i;

  i = 0;
	while(str[i] != '\0')
	{
		str[i] == dest[i];
		++i;
	}
	return (dest);
}
