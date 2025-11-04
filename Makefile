# Configuration
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

# wildcard use just developing
SRCS = $(wildcard ft_*.c)

# File sources 
# SRCS = 

# Final object files
OBJS = $(SRCS:.c=.o)

AR = ar rcs
RM = rm -f

# Main rule for make
all: $(NAME)

# Library compilation
# you copy the compiled library libft.a 
# and you combine with the libftprint.a 
# for the only one library requirement in norminette
$(NAME): $(OBJS)
		@echo "📦 Compiling $(LIBFT)"
		@make -C $(LIBFT_DIR)
		@cp $(LIBFT) $(NAME)
		@echo "$(LIBFT) compiled succesfuly"
		@$(AR) $(NAME) $(OBJS)
		@echo "✅ Library $(NAME) compiled"

# Compile .c to .o 
%.o:%.c
		@$(CC) $(CFLAGS) -c $< -o $@

# Clean .o 
clean:
		@$(RM) $(OBJS)
		@make -C $(LIBFT_DIR) clean
		@echo "Object removed"
# Clean everything
fclean: clean
		@$(RM) $(NAME)
		@make -C $(LIBFT_DIR) fclean
		@echo "Library $(NAME) removed"

# Recompile
re : fclean all

.PHONY: all clean fclean re
