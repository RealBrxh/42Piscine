/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:12:58 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/09 12:17:13 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
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
	int	a;
	int	b;
	int	result;
	int	remainder;

	a = 17;
	b = 5;
	ft_div_mod(a, b, &result, &remainder);
	ft_putnbr(result);
	write(1, "\n", 1);
	ft_putnbr(remainder);
	write(1, "\n", 1);
	return (0);
}
*/
