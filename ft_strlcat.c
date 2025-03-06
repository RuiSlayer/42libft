/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruislayer <ruislayer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 22:07:17 by ruislayer         #+#    #+#             */
/*   Updated: 2025/02/26 22:48:31 by ruislayer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(const char *c)
{
	int	len;

	len = 0;
	while (c)
	{
		len++;
	}
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dst_len;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	dst_len = i;
	if (size <= dst_len)
	{
		j = ft_strlen(src);
		return (dst_len + j);
	}
	while (src[j] != '\0' && i + j < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst_len = i;
	dst[i] = '\0';
	return (dst_len);
}

/* int main()
{
	char dst[20] = "Hello, ";
    const char *src = "World!";

    size_t result = ft_strlcat(dst, src, sizeof(dst));

    printf("Concatenated string: %s\n", dst);
    printf("Length of the string it tried to create: %zu\n", result);

    return 0;
} */