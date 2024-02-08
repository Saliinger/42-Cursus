/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:52:13 by anoukan           #+#    #+#             */
/*   Updated: 2024/02/08 09:46:41 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/so_long.h"

int32_t	main(int argc, char **argv)
{
	int		fd;
	t_map	map;
	char	*file;
	int		i;

	if (argc < 2)
		return (ft_printf("no map found"), 0);
	file = argv[1];
	fd = open(file, O_RDONLY);
	map.fd = fd;
	i = 0;
	while (i++ < ft_strlen(*argv))
		ft_printf("%s", get_next_line(map.fd));
	return (0);
}
