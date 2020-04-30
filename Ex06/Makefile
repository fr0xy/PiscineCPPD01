NAME		= human

SRC			= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ			= main.o HumanA.o HumanB.o Weapon.o

CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror
# CXXFLAGS   += -O3 -march=native -pipe -flto

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	@$(MAKE) fclean --no-print-directory
	@$(MAKE) all --no-print-directory