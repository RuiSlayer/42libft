/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:48:14 by rucosta           #+#    #+#             */
/*   Updated: 2025/04/07 18:48:17 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	ch;

	p = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n != 0)
	{
		*p++ = ch;
		n--;
	}
	return (s);
}

/* int main() {
    // Example 1: Setting an array to a specific value
    char str[10] = "HelloWorld";
    
    printf("Before ft_memset: %s\n", str);
    
    ft_memset(str, 'X', 5);  // Set the first 5 characters to 'X'
    
    printf("After ft_memset: %s\n", str);
    
    // Example 2: Setting a buffer with zeroes
    int arr[5] = {1, 2, 3, 4, 5};
    
    printf("Before ft_memset: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    ft_memset(arr, 0, sizeof(arr));  // Set all 5 elements to 0
    
    printf("After ft_memset: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
} */