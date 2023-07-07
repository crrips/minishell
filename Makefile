NAME 	= minishell

SRC 	= main.c	init.c

OBJ 	= $(SRC:.c=.o)

FLAGS 	= -Wall -Werror -Wextra

LINKERS = -lreadline

HEADERS = minishell.h

INC		= -I libft

RED 	= \033[31m
YELLOW 	= \033[33m
GREEN 	= \033[32m
END 	= \033[0m

%.o:%.c $(HEADERS)
	@cc $(FLAGS) $(INC) -c $< -o $@

all: $(NAME)
$(NAME):$(OBJ)
#	@cd libft && $(MAKE)
	@cc $(FLAGS) $(INC) $(LINKERS) $(OBJ) libft/libft.a -o $@
	@echo "$(GREEN)Executable file $(NAME) was compiled!$(END)"

clean:
	@rm -f $(OBJ)
	@echo "$(YELLOW)Object files were deleted!$(END)"
	
fclean: clean
#	@cd libft && $(MAKE) fclean
	@rm -f $(NAME)
	@echo "$(YELLOW)Executable file was deleted!$(END)"

re:	fclean all
	@echo "$(GREEN)Project was reloaded!$(END)"

.PHONY: all clean fclean re