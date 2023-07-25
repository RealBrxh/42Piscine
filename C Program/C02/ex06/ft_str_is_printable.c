/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:09:11 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/12 12:15:38 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d", ft_str_is_printable("ABCEDF&?I1829183891"));
	printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}
*/
