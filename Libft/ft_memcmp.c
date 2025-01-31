/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:09:02 by mzanana           #+#    #+#             */
/*   Updated: 2024/11/17 23:22:09 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				index;

	if (n == 0 || (!s1 && !s2))
		return (0);
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	index = 0;
	while ((*(str1 + index) == *(str2 + index)) && index < (n - 1))
		index++;
	return ((int)(*(str1 + index)) - (int)(*(str2 + index)));
}
