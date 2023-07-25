/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:39:24 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/10 14:47:43 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

void	ft_putnbr(int num)
{
	char	digit;

	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	digit = '0' + (num % 10);
	write(1, &digit, 1);
}

/*
int	main(void)
{
	char	*message;
	int		length;

	message = "Hello, world!";
	length = ft_strlen(message);
	ft_putnbr(length);
	write(1, "\n", 1);
	return (0);
}
*/
