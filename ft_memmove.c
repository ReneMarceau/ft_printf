/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarceau <rmarceau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:57:07 by rmarceau          #+#    #+#             */
/*   Updated: 2022/10/22 13:33:59 by rmarceau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*csrc;
	unsigned char	*cdst;

	i = 0;
	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	if (!(dst || src))
		return (NULL);
	if (cdst > csrc)
	{
		while (i < len)
		{
			cdst[len - 1] = csrc[len - 1];
			len--;
		}
	}
	else
	{
		while (i++ < len)
			cdst[i] = csrc[i];
	}
	return (dst);
}
