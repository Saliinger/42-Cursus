/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:45:33 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/23 13:51:25 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

// include
# include "../LibFt/GNL/get_next_line.h"
# include "../LibFt/libft/libft.h"
# include "../LibFt/printf/ft_printf.h"
# include "../mlx42/include/MLX42/MLX42.h"
# include <fcntl.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>

// structure

typedef struct s_map
{
	int		fd;
	char	**map;
	int		e;
	int		p;
	int		w;
}			t_map;

// define
# define WIDTH 256
# define HEIGHT 256

// window
int			ft_window(void);

#endif