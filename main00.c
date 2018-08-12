/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-goff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 22:52:10 by ale-goff          #+#    #+#             */
/*   Updated: 2018/08/12 13:49:26 by ale-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#define BUF_SIZE 4096

int		main(void)
{
	char	buf[BUF_SIZE];
	int		ret;

	ret = read(0, buf, BUF_SIZE);
	if (ret == 0)
	{
		return (1);
	}
	buf[ret] = '\0';
	test_rush(buf);

	return (0);
}
