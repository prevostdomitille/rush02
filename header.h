/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-goff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 15:45:36 by ale-goff          #+#    #+#             */
/*   Updated: 2018/08/12 01:04:09 by ale-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	display(int rows, int columns, char rush, int number_times);
int		ft_test(char *s1, char *s2);
int		get_rows(char *str);
int		get_columns(char *str);
char	*rush03(int x, int y);
char	*rush04(int x, int y);
char	*rush00(int x, int y);
char	*rush02(int x, int y);
char	*rush01(int x, int y);
void	writeline(char start, char mid, char end, int a);
void	test_rush(char *str);

#endif
