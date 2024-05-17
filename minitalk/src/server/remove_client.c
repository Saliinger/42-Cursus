/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_client.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:27:02 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/17 11:16:49 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void remove_client(Client *to_remove, Client **waitlist)
{
    Client *temp;
    Client *prev;
    Client *next;

    temp = *waitlist;
    if(temp->next)
    {
        while (temp != to_remove)
        {
            if (temp->next == to_remove)
                prev = temp;
            temp = temp->next;
        }
        next = temp->next;
        prev->next = next;
    }
    else
        *waitlist = NULL;
    free(temp->current_char);
    free(temp->message);
    free(temp);
}