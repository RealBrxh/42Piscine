/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:49:57 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/11 13:17:18 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_str_is_alpha(char *str)
{
	if (str == NULL)
		return (1);
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}

/*
#include<stdio.h>

int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "World123";
	char	str3[] = "";

	printf("Original String 1: %s\n", str1);
	printf("%d\n", ft_str_is_alpha(str1));
	printf("Original String 2: %s\n", str2);
	printf("%d\n", ft_str_is_alpha(str2));
	printf("Original String 3: %s\n", str3);
	printf("%d\n", ft_str_is_alpha(str3));
	return (0);
}
*/
