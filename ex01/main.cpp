#include <cstdlib>
#include "contact.hpp"
#include "phonebook.hpp"

int	is_it_space(std::string str)
{
	int i = 0;
	while(std::isspace((int)str[i]))
		i++;
	if (i == (int)str.length())
		return 1;
	return 0;
}

std::string	read_input(std::string text,int	i)
{
	std::string str;
	if (!std::getline(std::cin, str))
		exit(0);
	if (i && str.empty())
	{
		std::cout << "pls fill input with somthing\n";
		std::cout << text;
		return read_input(text, i);
	}else if (i && is_it_space(str))
	{
		std::cout << "pls fill input with somthing\n";
		std::cout << text;
		return read_input(text, i);
	}
	return str;
}

int main()
{
	PhoneBook	book;
	std::string	search_index;
	int			srch_index;
	while (true)
	{
		std::string	cmd;
		std::cout << "Enter command: ";
		cmd = read_input("", 0);
		if (cmd == "exit" || cmd == "EXIT")
		{
			std::cout << "i dont want see your face again magot.\n";
			return 0;
		}
		else if (cmd == "add" || cmd == "ADD")
		{
			book.set_contact_arr(book.get_index());
			book.increase_index();
			book.reset_index();
		}else if (cmd == "SEARCH" || cmd == "search")
		{
			if (book.get_num_of_contacts())
			{
				book.print_contacts();
				std::cout << "for more info enter a index: ";
				search_index = read_input("", 0);
				if (search_index.length() > 2 || search_index.empty() || !ft_isdigit(search_index))
					srch_index = 10;
				else
					srch_index = std::atoi(search_index.c_str());
				book.print_contact_for_search(srch_index);
			}else
				std::cout << "not sutch contact to search for\n";
		}
	}
}