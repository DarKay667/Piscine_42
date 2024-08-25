/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprelis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:39:17 by tprelis           #+#    #+#             */
/*   Updated: 2024/08/19 11:03:48 by tprelis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	tab = malloc(sizeof(int) * (i));
	if (tab == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = tab;
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (i);
}

/*int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	size;
	int	*tab;

	i = 0;
	min = 0;
	max = 43;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/
