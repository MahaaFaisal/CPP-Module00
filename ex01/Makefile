CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address
NAME = phoneBook
SRC = Contact.cpp PhoneBook.cpp helpers.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf phonebook

re: clean all