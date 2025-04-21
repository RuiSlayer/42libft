/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:48:36 by rucosta           #+#    #+#             */
/*   Updated: 2025/04/21 20:30:30 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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