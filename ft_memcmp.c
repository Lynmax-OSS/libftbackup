/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:23:49 by marvin            #+#    #+#             */
/*   Updated: 2024/11/12 14:23:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t i;
	unsigned char *a;
	unsigned char *b;

	i = 0;
	a = (unsigned char *)str1;
	b = (unsigned char *)str2;
	while (i < n && a[i] == b[i] && a[i] && b[i])
	{
		i++;
	}
	if (i == n) 
	{
		return (0);
	}
	return (a[i] - b[i]);
}