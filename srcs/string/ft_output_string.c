/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_output.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msemenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 16:13:11 by msemenov          #+#    #+#             */
/*   Updated: 2018/02/01 16:13:13 by msemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../printf.h"

static int 	ft_l(t_data *data, va_list ptr)
{
	char *string;

	string = va_arg(ptr, char*);
	if (data->minus == 1)
		ft_aligning_string_sleva(string, data);
	else
		ft_aligning_string_sprava(string, data);
	return (1);
}

void	ft_output_string(t_data *data, va_list ptr)
{
	char *string;
	char *string3 = "(null)";

	if ((data->l == 1 && ft_l(data, ptr)))
		return ;
	else
	{
		string = va_arg(ptr, char*);
		if (string == NULL)
		{
			string = ft_strdup(string3);
			if (data->minus == 1)
				ft_aligning_string_sleva(string, data);
			else
				ft_aligning_string_sprava(string, data);
			return ;
		}
	if (data->minus == 1)
		ft_aligning_string_sleva(string, data);
	else
		ft_aligning_string_sprava(string, data);
	}
}