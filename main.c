/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 16:51:16 by msemenov          #+#    #+#             */
/*   Updated: 2018/01/23 16:51:20 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./printf.h"
#include <locale.h>

int	main(void)
{
	 setlocale(LC_ALL, "");

	int a = 0;
	int b = 0;	
	 a = ft_printf("mine: |%-#o\n", 2147483647) - 8;
	 printf("mine len |%d\n", a);
	 b =    printf("orig: |%-#o\n", 2147483647) - 8;
	 printf("orig len |%d\n", b);


	// a = ft_printf("mine: |%-10c\n", 'a') - 8;
	// printf("mine len |%d\n", a);
	// b =    printf("orig: |%C\n",L'ы') - 8;
	// printf("orig len |%d\n", b);
// ft_printf("mine: |%0 0.12d\n", 123);
//    printf("orig: |%0 1.12d\n", 123);
	return (0);
}
