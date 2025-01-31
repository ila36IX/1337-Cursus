/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:56:24 by mzanana           #+#    #+#             */
/*   Updated: 2024/11/18 17:38:13 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		ch;
	size_t				index;

	str = (const unsigned char *)s;
	ch = (unsigned char)c;
	index = 0;
	while (index < n)
		if (*(str + index++) == ch)
			return ((void *)(str + (--index)));
	return (NULL);
}
