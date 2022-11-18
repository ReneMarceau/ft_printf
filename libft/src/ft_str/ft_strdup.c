/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarceau <rmarceau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:44:46 by rmarceau          #+#    #+#             */
/*   Updated: 2022/11/18 13:16:37 by rmarceau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	str_len;

	str_len = ft_strlen(s1) + 1;
	s2 = (char *)ft_calloc(str_len, sizeof(char));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, str_len);
	return (s2);
}
