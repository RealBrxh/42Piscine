/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:12:57 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/24 15:47:39 by jvan-de-         ###   ########.fr       */
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


int	main(void)
{
	int	number;

	number = 2147483647;
	if (ft_is_prime(number))
	{
		printf("%d is a prime number.\n", number);
	}
	else
	{
		printf("%d is not a prime number.\n", number);
	}
	return (0);
}

