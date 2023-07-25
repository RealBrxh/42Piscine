/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:05:09 by jvan-de-          #+#    #+#             */
/*   Updated: 2023/07/24 16:12:55 by jvan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	insertion_sort_recursive(char *arr[], int n)
{
	int		j;
	char	*key;

	j = n - 2;
	key = arr[n - 1];
	if (n <= 1)
		return ;
	insertion_sort_recursive(arr, n - 1);
	while (j >= 0 && strcmp(arr[j], key) > 0)
	{
		swap(&arr[j + 1], &arr[j]);
		j--;
	}
}

void	print_arguements(char *arr[], int n)
{
	if (n <= 0)
		return ;
	printf("%s\n", arr[0]);
	print_arguements(arr + 1, n - 1);
}

int	main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		printf("No arguements provided.\n");
		return (0);
	}
	insertion_sort_recursive(argv + 1, argc - 1);
	print_arguements(argv + 1, argc - 1);
	return (0);
}
