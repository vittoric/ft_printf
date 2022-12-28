# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 17:18:20 by vcodrean          #+#    #+#              #
#    Updated: 2022/12/28 11:54:37 by vcodrean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ftprintf.a

CC= gcc
CFLAGS= -Wall -Wextra -Werror
RM= rm -f

SRCS =	ft_putchar.c \
				ft_printf.c \
				ft_putstr.c \
				ft_strlen.c \
				ft_putchar_fd.c \
				ft_print_ptr.c \
				ft_putnbr.c \
				
								
OBJS = $(SRCS:.c=.o) 

$(NAME) : $(OBJS)
	@ar crs $(NAME) $(OBJS) 

all: $(NAME)

%.o : %.c
	@$(CC) $(CCFLAGS) -c -o $@ $< 
clean:
	@$(RM) $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: all fclean  
.PHONY: all clean fclean re