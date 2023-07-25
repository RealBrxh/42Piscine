/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:19:47 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/18 14:28:59 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*
int	main(void)
{
	int	result = ft_iterative_power(2, 4);

	printf("Result: %d\n", result);
	return (0);
}
*/
