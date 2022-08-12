# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbin-nas <mbin-nas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/10 16:30:33 by mbin-nas          #+#    #+#              #
#    Updated: 2022/08/12 14:10:16 by mbin-nas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -.- Makefile -.-

NAME =	libftprintf.a
CFILES = ft_printper.c ft_printstr.c ft_printnum.c \

OBJECTS=	$(CFILES:.c=.o)
CFLAGS=	-Wall -Wextra -Werror 
CC = gcc

#generating the object files 
$(NAME): $(OBJECTS)
		ar -rcs $(NAME) $(OBJECTS)
all:	$(NAME)

%.o : %.c 
		$(CC) $(CFLAGS) -c $< $^

#Clearing out the files 
clean:
		rm -rf $(OBJECTS)
fclean:	clean
		rm -rf $(NAME)
re: clean all