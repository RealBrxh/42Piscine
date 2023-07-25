/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:03:40 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/11 11:10:48 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	src[14];
	char	dest[20];
	char	str[14];

	ft_strncpy(src, "Hello, World!", sizeof(src) - 1);
	ft_strncpy(dest, src, 5);
	write(1, dest, 5);
	write(1, "\n", 1);
	return (0);
}
*/
