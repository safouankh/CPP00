CC = c++
CFLAGS = -Wall -Wextra -Werror  -std=c++98
SRCS = contact.cpp     main.cpp        phonebook.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = phonebook

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp contact.hpp     phonebook.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean