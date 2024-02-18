NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
LIB = ranlib #index library

# Source files and object files
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS = $(SRCS:.c=.o)

# Default rule
all: $(NAME)

# Rule for making the library
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	${LIB} ${NAME}

# Generic rule for objects
.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

# Cleaning up the object files
clean:
	$(RM) $(OBJS)

# Full clean (objects and library)
fclean: clean
	$(RM) $(NAME)

# Re-make the library
re: fclean all

# Include dependency on header file for all object files
$(OBJS): libft.h

.PHONY: all clean fclean re
