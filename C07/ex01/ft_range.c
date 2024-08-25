/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprelis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:52:35 by tprelis           #+#    #+#             */
/*   Updated: 2024/08/20 14:14:53 by tprelis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = 0;
	if (min >= max)
	{
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (tab == 0)
	{
		return (0);
	}
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/*int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*tab;

	tab = 0;
	min = 0;
	max = 43;
	tab = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}*/
