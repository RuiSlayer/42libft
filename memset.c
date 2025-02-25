/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruislayer <ruislayer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:14:18 by ruislayer         #+#    #+#             */
/*   Updated: 2025/02/25 21:32:53 by ruislayer        ###   ########.fr       */
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