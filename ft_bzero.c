/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruislayer <ruislayer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:51:54 by ruislayer         #+#    #+#             */
/*   Updated: 2025/02/25 23:04:02 by ruislayer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n != 0)
	{
		*p++ = '\0';
		n--;
	}
}

/* int main()
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";

    // Display original strings
    printf("Original str1: '%s'\n", str1);
    printf("Original str2: '%s'\n", str2);

    // Use ft_bzero to zero out the first 5 characters of str1
    ft_bzero(str1, 5);

    // Use bzero from <string.h> to zero out the first 5 characters of str2
    bzero(str2, 5);

    // Display the modified strings after using ft_bzero and bzero
    printf("After ft_bzero str1: '%s'\n", str1);
    printf("After bzero str2: '%s'\n", str2);

    return 0;
} */