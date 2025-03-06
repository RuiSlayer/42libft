/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruislayer <ruislayer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 23:21:44 by ruislayer         #+#    #+#             */
/*   Updated: 2025/02/26 21:40:01 by ruislayer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ps;
	unsigned char	*pd;
	unsigned char	*ptemp;
	unsigned int	i;

	i = 0;
	ps = (unsigned char *)src;
	pd = (unsigned char *)dest;
	while (i < n)
	{
		ptemp = ps[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		pd[i] = ptemp[i];
		i++;
	}
	return (dest);
}

int main()
{
	char csrc[100] = "Geeksfor"; 
	ft_memmove(csrc+5, csrc, strlen(csrc)+1); 
	printf("%s\n", csrc); 
	return 0;
}