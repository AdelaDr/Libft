/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 19:20:09 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/15 19:20:15 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
        t_list  *last;

        if (!lst || !new)
                return ;
        if (*lst == NULL)
        {
                *lst = new;
                return ;
        }
        last = *lst;
        while (last->next)
                last = last->next;
        last->next = new;
}
