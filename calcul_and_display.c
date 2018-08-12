/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-goff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 18:56:42 by ale-goff          #+#    #+#             */
/*   Updated: 2018/08/12 13:53:11 by ale-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar((char)nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	display(int rows, int colums, char rush, int number_times)
{
	if (number_times > 0)
		write(1, " || ", 4);
	write(1, "[rush-0", 7);
	write(1, &rush, 1);
	write(1, "] [", 3);
	ft_putnbr(colums);
	write(1, "] [", 3);
	ft_putnbr(rows);
	write(1, "]", 1);
}

int		ft_test(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}

	return (1);
}

int		get_rows(char *str)
{
	int rows;

	rows = 0;
	while (*str)
	{
		if (*str == '\n')
		{
			rows++;
		}
		str++;
	}
	return (rows);
}

int		get_columns(char *str)
{
	int columns;

	columns = 0;
	while (*str != '\n' && *str)
	{
		columns++;
		str++;
	}
	return (columns);
}
