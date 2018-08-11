/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 00:06:02 by hryu              #+#    #+#             */
/*   Updated: 2018/07/29 20:13:03 by ale-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;
	int c;
	
	i = 0;
	j = 0;
	c = 0;
	while (i < y)
	{
		if (i == 0 || i == y - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		while (j++ < x - 2)
			if (i == 0 || i == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
		if (x != 1)
			(i == 0 || i == y - 1) ?
				ft_putchar('C') : ft_putchar('B');
		ft_putchar('\n');
		i++;
		j = 0;
	}
}
