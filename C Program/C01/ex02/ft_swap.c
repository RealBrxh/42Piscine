/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:48:36 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/08 16:36:33 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
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
	int	num1;
	int	num2;

	num1 = 10;
	num2 = 5;
	ft_putnbr(num1);
	write(1, ", ", 2);
	ft_putnbr(num2);
	write(1, "\n", 1);
	ft_swap(&num1, &num2);
	ft_putnbr(num1);
	write(1, ", ", 2);
	ft_putnbr(num2);
	write(1, "\n", 1);
	return (0);
}
*/
