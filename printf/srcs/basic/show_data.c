/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 15:46:16 by msemenov          #+#    #+#             */
/*   Updated: 2018/01/23 15:46:17 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

void show_data(t_data data)
{
	printf("data.hh = %d\n", data.hh);
	printf("data.h = %d\n", data.h);
	printf("data.l = %d\n", data.l);
	printf("data.ll = %d\n", data.ll);
	printf("data.j = %d\n", data.j);
	printf("data.z = %d\n", data.z);
	printf("data.minus = %d\n", data.minus);
	printf("data.plus = %d\n", data.plus);
	printf("data.zero = %d\n", data.zero);
	printf("data.hash = %d\n", data.hash);
	printf("data.dot = %d\n", data.dot);
	printf("data.width = %d\n", data.width);
	printf("data.precision = %d\n", data.precision);
	printf("data.percent = %d\n", data.percent);
	printf("data.space = %d\n", data.space);
}
