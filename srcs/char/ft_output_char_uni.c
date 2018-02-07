/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_char_uni.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 14:39:48 by msemenov          #+#    #+#             */
/*   Updated: 2018/02/06 14:39:49 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

void	ft_output_char_uni(t_data *data, va_list ptr)
{
	unsigned int  nb;

	nb = 0;
	nb = va_arg(ptr,unsigned int);
	if (nb > 127 && nb < 2048)
		data->width = data->width - 2;
	else if (nb > 2047 && nb < 65536)
		data->width = data->width - 3;
	else if (nb > 65535)
		data->width = data->width - 4;
	if (data->minus == 1)
		ft_aligning_char_uni_sleva(nb, data);
	else
		ft_aligning_char_uni_sprava(nb, data);
}
