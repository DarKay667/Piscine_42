/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprelis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 11:24:24 by tprelis           #+#    #+#             */
/*   Updated: 2024/08/17 14:33:51 by tprelis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (result < nb && i <= 46340)
	{
		result = i * i;
		if (result == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%i", ft_sqrt(1764));
}*/
