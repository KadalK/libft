SRC	=	ft_atoi.c	\
		ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_strlen.c	\
		ft_memset.c	\
		ft_bzero.c	\
		ft_memcpy.c	\
		ft_strlcat.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c	\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_memchr.c	\
		ft_memcmp.c	\
		ft_strnstr.c	\
		ft_strdup.c	\
		ft_substr.c	\
		ft_calloc.c	\
		ft_memmove.c	\
		ft_split.c	\
		ft_strjoin.c	\
		ft_strlcpy.c	\
		ft_strtrim.c	\
		ft_itoa.c	\
		ft_striteri.c	\
		ft_putstr_fd.c	\
		ft_putchar_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_strmapi.c

SRC_BONUS =	ft_lstnew.c	\

OBJ	= $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

HEADER	= libft.h

NAME	= libft.a

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) Makefile
		ar rcs $(NAME) $(OBJ)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ_BONUS) $(OBJ)
		ar rcs $(NAME) $(OBJ_BONUS) $(OBJ)
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
