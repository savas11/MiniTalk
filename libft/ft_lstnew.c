/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savas11 <osavas@student.42kocaeli.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:19:00 by savas11           #+#    #+#             */
/*   Updated: 2022/01/30 16:19:02 by savas11          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*src;

	src = (t_list *) malloc(sizeof(t_list));
	if (!src)
		return (NULL);
	src -> content = content;
	src -> next = NULL;
	return (src);
}
