/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:43:20 by saliinger         #+#    #+#             */
/*   Updated: 2024/04/20 22:35:37 by saliinger        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "../../includes/minitalk.h"

int	main(int argc, char **argv)
{
	int	pid;

	ft_printf(" ██████╗██╗     ██╗███████╗███╗   ██╗████████╗\n");
	ft_printf("██╔════╝██║     ██║██╔════╝████╗  ██║╚══██╔══╝\n");
	ft_printf("██║     ██║     ██║█████╗  ██╔██╗ ██║   ██║   \n");
	ft_printf("██║     ██║     ██║██╔══╝  ██║╚██╗██║   ██║   \n");
	ft_printf("╚██████╗███████╗██║███████╗██║ ╚████║   ██║   \n");
	ft_printf(" ╚═════╝╚══════╝╚═╝╚══════╝╚═╝  ╚═══╝   ╚═╝   \n");
	if (argc != 3)
		return (EXIT_FAILURE);
	pid = ft_atoi(argv[1]);
	ft_printf("pid : %d\n", pid);
	ft_printf("Message : \n%s", argv[2]);
	return (0);
}
