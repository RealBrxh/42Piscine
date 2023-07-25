/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:09:58 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/19 17:14:28 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1 || index == 2)
	{
		return (1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
int	main(void)
{
	int	n;
	int	result;

	n = 6;
	result = ft_fibonacci(n);
	printf("The %d-th element of the Fibonacci sequence is: %d\n", n, result);
	return (0);
}
*/
