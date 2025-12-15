/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 19:28:30 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/15 19:28:37 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
        t_list  *temp;

        if (!lst || !del)
                return ;
        while (*lst)
        {
                temp = (*lst)->next;
                del((*lst)->content);
                free(*lst);
                *lst = temp;
        }
        *lst = NULL;
}
