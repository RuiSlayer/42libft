/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruislayer <ruislayer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:54:07 by ruislayer         #+#    #+#             */
/*   Updated: 2025/04/17 21:42:20 by ruislayer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	count_numbers(int n)
{
	int		i;
	int		count;

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

char	*ft_itoa_zero(void)
{
	char	*ptr;

	ptr = malloc(2);
	if (!ptr)
		return (NULL);
	ptr[0] = '0';
	ptr[1] = '\0';
	return (ptr);
}

char	*ft_itoa_int_min(void)
{
	char	*ptr;

	ptr = malloc(12);
	if (!ptr)
		return (NULL);
	ptr[0] = '-';
	ptr[1] = '2';
	ptr[2] = '1';
	ptr[3] = '4';
	ptr[4] = '7';
	ptr[5] = '4';
	ptr[6] = '8';
	ptr[7] = '3';
	ptr[8] = '6';
	ptr[9] = '4';
	ptr[10] = '8';
	ptr[11] = '\0';
	return (ptr);
}

char	*ft_fill_itoa(char *ptr, int n, int size_int)
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

char	*ft_itoa(int n)
{
	char	*ptr;
	int		size_int;

	if (n == -2147483648)
		return (ft_itoa_int_min());
	if (n == 0)
		return (ft_itoa_zero());
	if (n < 0)
	{
		n *= -1;
		size_int = count_numbers(n) + 2;
		ptr = malloc(size_int);
		if (!ptr)
			return (NULL);
		ptr[0] = '-';
	}
	else
	{
		size_int = count_numbers(n) + 1;
		ptr = malloc(size_int);
		if (!ptr)
			return (NULL);
	}
	ptr[size_int - 1] = '\0';
	return (ft_fill_itoa(ptr, n, size_int));
}
