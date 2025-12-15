/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 19:38:36 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/15 19:38:38 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
        t_list  *new;

        new = (t_list *)malloc(sizeof(t_list));
        if (!new)
                return (NULL);
        new->content = content;
        new->next = NULL;
        return (new);
}
