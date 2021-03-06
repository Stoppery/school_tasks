/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:37:28 by dsherie           #+#    #+#             */
/*   Updated: 2020/11/06 15:13:09 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t amount)
{
	unsigned char	*start;
	size_t			i;

	start = (unsigned char	*)destination;
	i = 0;
	while (i < amount)
		start[i++] = (unsigned char)c;
	return (start);
}
