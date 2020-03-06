# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksalmi <ksalmi@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/24 13:53:30 by ksalmi            #+#    #+#              #
#    Updated: 2020/03/05 17:11:43 by ksalmi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC_NAME = ft_printf.c init.c init_first_time.c save_area_and_cut_specs.c \
	   add_to_final_str.c read_specs.c make_formatting.c cs_formatting.c \
	   diuf_formatting.c oxpb_formatting.c print_text.c ft_itoa_base_ll.c \
	   handle_precision.c ft_itoa_double.c ft_itoa_ll.c implement_flags.c \
	   put_field_width.c put_hash_flag.c put_justify_and_asterisk_flags.c \
	   put_plus_space_flag.c put_zero_flag.c libc_functions.c libc_functions_2.c \
	   libc_functions_3.c ft_itoa.c ft_atoi.c handle_double_percent.c error.c \
	   intlength_double_all_zeroes.c check_colors.c ft_strncmp.c

SRCS = $(addprefix src/,$(SRC_NAME))

OBJ = $(subst .c,.o,$(SRC_NAME))

INCLUDES = includes/

FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) $(FLAGS) -I $(INCLUDES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
