# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msemenov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/23 14:54:01 by msemenov          #+#    #+#              #
#    Updated: 2018/01/23 14:54:03 by msemenov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER = /mnt/c/Users/viper/Desktop/ft_printf/printf.h
FLAGS = -Wall -Wextra -Werror
HDR = -c -I $(HEADER)
SRC_INT = ./srcs/int/ft_add_plus.c ./srcs/int/ft_add_space.c ./srcs/int/ft_aligning_number_sleva.c \
./srcs/int/ft_aligning_number_sprava.c ./srcs/int/ft_kostil.c ./srcs/int/ft_output.c               \
./srcs/int/ft_output_number.c ./srcs/int/itoa_base.c ./srcs/int/unsigned_itoa.base.c 
SRC_BASIC = ./srcs/basic/ft_atoi.c ./srcs/basic/ft_check_conv.c ./srcs/basic/ft_get_data.c        \
./srcs/basic/ft_get_width.c ./srcs/basic/ft_isdigit.c ./srcs/basic/ft_strjoin.c                    \
./srcs/basic/ft_strlen.c ./srcs/basic/ft_strnew.c ./srcs/basic/show_data.c                         
SRC_OCTET = ./srcs/octet/ft_aligning_number_sleva_octet.c ./srcs/octet/ft_hash.c         \
./srcs/octet/ft_aligning_number_sprava_octet.c ./srcs/octet/ft_output_octet.c 
PRINTF = ./ft_printf.c
OBJ = ft_add_plus.o ft_add_space.o ft_aligning_number_sleva.o ft_aligning_number_sprava.o          \
ft_kostil.o ft_output.o ft_output_number.o itoa_base.o unsigned_itoa.base.o ft_atoi.o ft_check_conv.o \
ft_get_data.o ft_get_width.o ft_isdigit.o ft_strjoin.o ft_strlen.o ft_strnew.o show_data.o ft_printf.o \
ft_output_octet.o ft_aligning_number_sprava_octet.o ft_aligning_number_sleva_octet.o ft_hash.o

all:$(NAME)

$(NAME):
		@ gcc $(FLAGS) $(SRC_BASIC) $(SRC_INT) $(SRC_OCTET) $(PRINTF) $(HDR)
		@ ar rc $(NAME) $(OBJ)
		@ /bin/rm -f $(OBJ)

clean:
		@ /bin/rm -f $(OBJ)

fclean: clean
		@ /bin/rm -f $(NAME)

re: fclean all