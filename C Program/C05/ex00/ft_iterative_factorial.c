/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:43:52 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/18 12:47:53 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	factorial = 1;
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}

/*
int	main(void)
{
	int	result = ft_iterative_factorial(5);

	printf("Factorial: %d\n", result);
	return (0);
}
*/
