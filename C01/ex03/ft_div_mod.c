/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 12:07:08 by darkay            #+#    #+#             */
/*   Updated: 2024/08/10 13:32:41 by darkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	i;
	int	j;
	int	div;
	int	mod;

	i = 4;
	j = 2;
	ft_div_mod(i, j, &div, &mod);
	printf("%d", div);
	printf("%d", mod);
}*/
