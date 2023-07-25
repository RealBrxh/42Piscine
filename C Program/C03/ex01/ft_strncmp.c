/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:15:36 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/17 15:34:02 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*
int	main(void)
{
	const char	*str1 = "";
	const char	*str2 = "";
	int	result = ft_strncmp(str1, str2, 2);

	printf("Result: %d\n", result);
	return (0);
}
*/
