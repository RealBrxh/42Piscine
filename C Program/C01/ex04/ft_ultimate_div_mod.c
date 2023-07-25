/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:05:49 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/09 14:17:21 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
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
	int	*ptr1;
	int	*ptr2;

	num1 = 17;
	num2 = 5;
	ptr1 = &num1;
	ptr2 = &num2;
	ft_ultimate_div_mod(ptr1, ptr2);
	ft_putnbr(num1);
	write(1, "\n", 1);
	ft_putnbr(num2);
	write(1, "\n", 1);
	return (0);
}
*/
