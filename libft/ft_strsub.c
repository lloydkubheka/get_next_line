/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:09:45 by xkubheka          #+#    #+#             */
/*   Updated: 2018/06/11 11:36:13 by xkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	if (!s)
		return (NULL);
	sub = ((char*)malloc(sizeof(char) * len + 1));
	if (!sub)
		return (NULL);
	if (s)
	{
		while (i < len)
		{
			sub[i] = s[start + i];
			i++;
		}
		sub[i] = '\0';
	}
	return (sub);
}
