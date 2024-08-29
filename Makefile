Library = push_swap

CFILES = $(wildcard *.c utils/*.c)
OFILES = $(CFILES:.c=.o)

Compiler = gcc
Flags =  -Wall -Wextra -Werror

OUTN = $(Library).a
NAME = $(OUTN)

all: $(NAME)

$(NAME): $(OFILES)
	ar -cr $(OUTN) $(OFILES)

# %.o: %.c
# 	$(Compiler) $(Flags) -c $< -o $@ -I./

%.o: %.c
	$(Compiler) -c $< -o $@ -I./

dev: fclean $(OFILES) $(NAME)
	$(Compiler) $(Flags) -o a.out main.o $(NAME)

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
