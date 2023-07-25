/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:16:48 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/24 15:46:08 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (sqrt <= nb / sqrt)
	{
		if (sqrt * sqrt == nb)
		{
			return (sqrt);
		}
		sqrt++;
	}
	return (0);
}


int	main(void)
{
	int	number;
	int	result;

	number = 2147483647;
	result = ft_sqrt(number);
	if (result != 0)
	{
		printf("The square root of %d is: %d\n", number, result);
	}
	else
	{
		printf("%d is an irrational number.\n", number);
	}
	return (0);
}

