# Configuration
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
#Files SRC
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
#SRCS = $(wildcard ft_*.c)
# Compile .c to .o
OBJS = $(SRCS:.c=.o)

# main rule
all: $(NAME)

# libray compilation
$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "✅ Library $(NAME) compiled"

# Compile .c to .o
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Clean .o
clean:
	@$(RM) $(OBJS)
	@echo "🧹 Remove objects"

# Cleans everything
fclean: clean
	@$(RM) $(NAME)
	@echo "🗑️  Library $(NAME) removed"

# Recompile all
re: fclean all

.PHONY: all clean fclean re
