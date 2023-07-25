/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:34:33 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/24 15:49:05 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
	{
		return (2);
	}
	while (1)
	{
		if (ft_is_prime(nb))
		{
			return (nb);
		}
		nb++;
	}
}


int	main(void)
{
	int	number;
	int	next_prime;

	number = 2147483646;
	next_prime = ft_find_next_prime(number);
	printf("Next prime number after %d is %d\n", number, next_prime);
	return (0);
}
