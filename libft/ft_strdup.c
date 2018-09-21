/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 17:51:47 by xkubheka          #+#    #+#             */
/*   Updated: 2018/06/07 17:55:04 by xkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	size_t	len;

	len = ft_strlen(s1);
	new = (char*)malloc(len + 1 * sizeof(char));
	if (new)
		ft_strcpy(new, s1);
	return (new);
}
