##
## Makefile for Makefile in /home/mansar_e/bin
##
## Made by Mansart Esteban
## Login   <mansar_e@epitech.net>
##
## Started on  Wed Jan 13 21:58:43 2016 Mansart Esteban
## Last update Sat Jun  4 11:46:17 2016 Mansart Esteban
##

NAME		=	mysh
VPATH		=	srcs
SRCS		=	main.c \
			env.c \
			gnl.c \
			command.c
OBJS		=	$(SRCS:.c=.o)
CFLAGS		=	-g -W -Wall -Wextra -pedantic -ansi
CFLAGS		+=	-Iinclude

LIB		=	-Llib -llist -lmy

all		:	$(NAME)
$(NAME) 	:	$(OBJS)
			gcc $(OBJS) $(LIB) -o $(NAME)
clean		:
			rm -fr $(OBJS)
fclean		:	clean
			rm -fr $(NAME)
re		:	fclean all
