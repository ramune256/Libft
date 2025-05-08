/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shunwata <shunwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:45:28 by shunwata          #+#    #+#             */
/*   Updated: 2025/05/08 20:49:51 by shunwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (dstsize == 0)
		return (src_len);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	while (src[i] != '\0' && dst_len + i + 1 < dstsize)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dst1[20] = "";
// 	char	dst2[20] = "";
// 	char	src[] = " World!";
// 	size_t	result1;
// 	size_t	result2;

// 	printf("Before:\n");
// 	printf("dst1(ft): %s\n", dst1);
// 	printf("dst2(original): %s\n", dst2);
// 	printf("src: %s\n", src);

// 	result1 = ft_strlcat(dst1, src, 0);
// 	result2 = strlcat(dst2, src, 0);

// 	printf("\nAfter:\n");
// 	printf("dst1(ft): %s\n", dst1);
// 	printf("dst2(original): %s\n", dst2);
// 	printf("Return value(ft): %zu\n", result1);
// 	printf("Return value(original): %zu\n", result2);

// 	return (0);
// }
