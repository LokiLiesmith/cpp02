# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/18 18:14:54 by mrazem            #+#    #+#              #
#    Updated: 2025/12/18 18:16:00 by mrazem           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98

SRC			:= main.cpp Fixed.cpp
NAME		:= first_class
OBJDIR		:= obj
OBJ			:= $(SRC:%.c=$(OBJDIR)/%.o)


all: $(NAME)
$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "Compiled. \nrun with: ./$(NAME)"

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	@$(CXX) $C(CXXFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

# Clean rules
clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)
	
re: fclean all
.PHONY: all clean fclean re