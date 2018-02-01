/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_octet.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 11:00:46 by msemenov          #+#    #+#             */
/*   Updated: 2018/01/29 11:00:51 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printf.h"

static int ft_aligning_char_sleva(char c, t_data *data)
{
	char *width;
	int i;

	i = 0;
	width = NULL;
	if (data->width > 0)
	{
		width = ft_strnew(data->width);
		width[data->width - 1] = '\0';
		while (i < (data->width - 1))
		{
			width[i] = ' ';
			i++;
		}
		write (1, &c, 1);
		write (1, width, ft_strlen(width));
		data->ret = (int)ft_strlen(width) + 1;
		free (width);
		return(0);
	}
	write (1, &c, 1);
	data->ret = 1;
	return (0);
}

static int ft_aligning_char_sprava(char c, t_data *data)
{
	char *width;
	int i;

	i = 0;
	width = NULL;
	if (data->width > 0)
	{
		width = ft_strnew(data->width);
		width[data->width - 1] = '\0';
		while (i < (data->width - 1))
		{
			width[i] = ' ';
			i++;
		}
		write (1, width, ft_strlen(width));
		write (1, &c, 1);
		data->ret = (int)ft_strlen(width) + 1;
		free (width);
		return(0);
	}
	write (1, &c, 1);
	data->ret = 1;
	return (0);
}
static int 	ft_l(t_data *data, va_list ptr)
{
	char c;

	c = (char) va_arg(ptr, int);
	if (data->minus == 1)
		ft_aligning_char_sleva(c, data);
	else
		ft_aligning_char_sprava(c, data);
	return (1);
}

void	ft_output_char(t_data *data, va_list ptr)
{
	char c;

	if ((data->l == 1 && ft_l(data, ptr)))
		return ;
	else
	{
		c = va_arg(ptr, int);
		c = (char)c;
	if (data->minus == 1)
		ft_aligning_char_sleva(c, data);
	else
		ft_aligning_char_sprava(c, data);
	}
}