##
## Makefile for Makefile in /home/mansar_e/bin
##
## Made by Mansart Esteban
## Login   <mansar_e@epitech.net>
##
## Started on  Wed Jan 13 21:58:43 2016 Mansart Esteban
## Last update Fri May 27 15:55:31 2016 Mansart Esteban
##

NAME		=	gnl
VPATH		=	srcs
SRCS		=	main.c \
			gnl.c
OBJS		=	$(SRCS:.c=.o)
CFLAGS		=	-W -Wall -Wextra -pedantic -ansi
CFLAGS		+=	-Iinclude

all		:	$(NAME)
$(NAME) 	:	$(OBJS)
			gcc $(OBJS) -o $(NAME)
clean		:
			rm -fr $(OBJS)
fclean		:	clean
			rm -fr $(NAME)
re		:	fclean all
