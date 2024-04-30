/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:26:06 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/30 14:53:07 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

// ---Lib---
# include "../libft/libft.h"
# include <signal.h>
# include <sys/types.h>

//---Server---
void	server_handler(int signum, siginfo_t info, void *context);

//---Client---
void	ft_send_char(char c, pid_t server_pid);
void	ft_send_message(char *str, pid_t server_pid);
void	client_handler(int sig);

//---Function---
void	ft_error(int i);
void	ft_banner(int i, pid_t pid);

#endif