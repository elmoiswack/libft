/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dhussain <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 14:14:16 by dhussain      #+#    #+#                 */
/*   Updated: 2022/10/11 17:18:43 by dhussain      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static void	*cpy(unsigned char *tsrc, unsigned char *tdest,
				size_t i, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tdest;
	unsigned char	*tsrc;

	i = 0;
	tdest = (unsigned char *)dst;
	tsrc = (unsigned char *)src;
	if ((dst == (void *)0) && (src == (void *)0))
		return (NULL);
	if (len == 0)
		return (tdest);
	if (tsrc > tdest)
	{
		cpy(tsrc, tdest, i, len);
		return (tdest);
	}
	else
	{
		i = len;
		while (i-- > 0)
			tdest[i] = tsrc[i];
		tdest[0] = tsrc[0];
	}
	return (tdest);
}

static void	*cpy(unsigned char *tsrc, unsigned char *tdest,
			size_t i, size_t len)
{
	while (i < len)
	{
		tdest[i] = tsrc[i];
		i++;
	}
	return (tdest);
}
