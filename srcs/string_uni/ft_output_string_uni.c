/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_string_uni.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 11:22:05 by msemenov          #+#    #+#             */
/*   Updated: 2018/02/07 11:22:06 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

void	ft_output_string_uni(t_data *data, va_list ptr)
{
	unsigned int  *array;
	int i;

	i = 0;
	array = NULL;
	array = va_arg(ptr,unsigned int*);
	if (MB_CUR_MAX == 1)
	{
		data->ret = -1;
		return ;
	}
	while (array[i] != '\0')
	{
		ft_aligning_char_uni_sprava(array[i], data);
		i++;	
	}
	// if (nb > 127 && nb < 2048)
	// 	data->width = data->width - 2;
	// else if (nb > 2047 && nb < 65536)
	// 	data->width = data->width - 3;
	// else if (nb > 65535)
	// 	data->width = data->width - 4;
	// if (data->minus == 1)
	// 	ft_aligning_char_uni_sleva(nb, data);
	// else
	// 	ft_aligning_char_uni_sprava(nb, data);
}