/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:57:54 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/10 17:10:50 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size -1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

void	printarray(int *tab, int size)
{
	int		i;
	char	digit;

	i = 0;
	while (i < size)
	{
		digit = '0' + tab[i];
		write(1, &digit, 1);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

/*
int	main(void)
{
	int	arr[5];
	int	size;

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	size = sizeof(arr) / sizeof(arr[0]);
	write(1, "Original array: ", 16);
	printarray(arr, size);
	ft_rev_int_tab(arr, size);
	write(1, "Reversed array: ", 16);
	printarray(arr, size);
	return (0);
}
*/
