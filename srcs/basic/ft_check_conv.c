/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_conv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 15:29:49 by msemenov          #+#    #+#             */
/*   Updated: 2018/01/23 15:29:51 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

void	ft_check_conv(const char *format, t_data *data,va_list ptr)
{
	if (*format == 'd' || *format == 'i' || *format == 'D')
		ft_output_number(data, ptr);
	if (*format == 'o')
		ft_output_octet(data,ptr);
	if (*format == 'x')
		ft_output_hex(data, ptr);
	if (*format == 'X')
		ft_output_hex_b(data, ptr);
	if (*format == 'u')
		ft_output_un_int(data, ptr);
	if (*format == 'c' || *format == '%')
		ft_output_char(data, ptr, format);
	if (*format == 's')
		ft_output_string(data, ptr);
	if(*format == 'U')
		ft_output_unb_int(data, ptr);
	if (*format == 'C')
		ft_output_char_uni(data, ptr);
	if (*format == 'S')
		ft_output_string_uni(data,ptr);
}