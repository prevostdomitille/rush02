/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-goff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 22:33:20 by ale-goff          #+#    #+#             */
/*   Updated: 2018/08/12 14:04:47 by ale-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	test_rush(char *str)
{
	int rows;
	int colums;
	int number_times;

	number_times = 0;
	colums = get_columns(str);
	rows = get_rows(str);
	if (ft_test(str, rush00(rows, colums)))
		display(rows, colums, '0', number_times++);
	if (ft_test(str, rush01(rows, colums)))
		display(rows, colums, '1', number_times++);
	if (ft_test(str, rush02(rows, colums)))
		display(rows, colums, '2', number_times++);
	if (ft_test(str, rush03(rows, colums)))
		display(rows, colums, '3', number_times++);
	if (ft_test(str, rush04(rows, colums)))
		display(rows, colums, '4', number_times++);
	if (number_times == 0)
		write(1, "aucune", 6);
	write(1, "\n", 1);
}
