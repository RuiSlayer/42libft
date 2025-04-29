/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:27:29 by rucosta           #+#    #+#             */
/*   Updated: 2025/04/29 14:08:50 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static int	count_numbers(long n)
{
	long		i;
	int			count;

	count = 0;
	i = n;
	if (i == 0)
		return (1);
	if (i < 0)
		i *= -1;
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

static char	*ft_itoa_zero(void)
{
	char	*ptr;

	ptr = malloc(2);
	if (!ptr)
		return (NULL);
	ptr[0] = '0';
	ptr[1] = '\0';
	return (ptr);
}

static char	*ft_fill_itoa(char *ptr, long n, int size_int)
{
	int	i;

	i = size_int - 2;
	while (n > 0)
	{
		ptr[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (ptr);
}

char	*ft_itoa(long n)
{
	char	*ptr;
	int		size_int;
	long	temp;

	temp = n;
	if (temp == 0)
		return (ft_itoa_zero());
	if (temp < 0)
	{
		temp *= -1;
		size_int = count_numbers(temp) + 2;
		ptr = malloc(size_int);
		if (!ptr)
			return (NULL);
		ptr[0] = '-';
	}
	else
	{
		size_int = count_numbers(temp) + 1;
		ptr = malloc(size_int);
		if (!ptr)
			return (NULL);
	}
	ptr[size_int - 1] = '\0';
	return (ft_fill_itoa(ptr, temp, size_int));
}
