/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:34:33 by marferre          #+#    #+#             */
/*   Updated: 2022/08/22 01:30:41 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_atoi(char *str)
{
	int	c;
	int	x;
	int	y;

	c = 0;
	x = 1;
	y = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			x *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		y = (str[c] - '0') + (y * 10);
		c++;
	}
	return (x * y);
}

/*
int	main(void)
{
	printf("%d", ft_atoi("    ---+--+1234ab567 253234"));
}
*/