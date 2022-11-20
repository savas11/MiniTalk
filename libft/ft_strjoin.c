/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savas11 <osavas@student.42kocaeli.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:33:33 by savas11           #+#    #+#             */
/*   Updated: 2022/01/30 17:33:34 by savas11          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	boyut;

	if (!s1 || !s2)
		return (NULL);
	boyut = (ft_strlen(s1) + ft_strlen(s2) + 1);
	str = malloc(sizeof(char) * boyut);
	i = -1;
	j = -1;
	if (!str)
	{
		return (NULL);
	}	
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++j])
		str[i++] = s2[j];
	str[i] = '\0';
	return (str);
}
