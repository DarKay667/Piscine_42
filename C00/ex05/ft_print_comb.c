/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprelis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:03:11 by tprelis           #+#    #+#             */
/*   Updated: 2024/08/09 11:23:38 by tprelis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_int(int i, int j, int k)
{
	char	n[5];

	n[0] = '0' + i;
	n[1] = '0' + j;
	n[2] = '0' + k;
	n[3] = ',';
	n[4] = ' ';
	if (i == 7 && j == 8 && k == 9)
	{
		write(1, n, 3);
	}
	else
	{
		write(1, n, 5);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_print_int(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
