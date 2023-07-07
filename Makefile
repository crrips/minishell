NAME 	= minishell

SRC 	= main.c	utils1.c

OBJ 	= $(SRC:.c=.o)

FLAGS 	= -Wall -Werror -Wextra

LINKERS = -lreadline

HEADERS = minishell.h

RED 	= \033[31m
YELLOW 	= \033[33m
GREEN 	= \033[32m
END 	= \033[0m

%.o:%.c $(HEADERS)
	@cc $(FLAGS) -c $< -o $@

all: $(NAME)
$(NAME):$(OBJ)
	@cc $(FLAGS) $(LINKERS) $(OBJ) -o $@
	@echo "$(GREEN)Executable file $(NAME) was compiled!$(END)"

clean:
	@rm -f $(OBJ)
	@echo "$(YELLOW)Object files were deleted!$(END)"
	
fclean: clean
	@rm -f $(NAME)
	@echo "$(YELLOW)Executable file was deleted!$(END)"

re:	fclean all
	@echo "$(GREEN)Project was reloaded!$(END)"

.PHONY: all clean fclean re