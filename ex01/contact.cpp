#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"

std::string	read_input(std::string text,int	i);

void	Contact::print_info(void)
{
	std::cout << "first name: " << first_name << "\n";
	std::cout << "last name: " << last_name << "\n";
	std::cout << "nickname: " << nickname << "\n";
	std::cout << "phone_number: " << phone_number << "\n";
	std::cout << "darkest_secret: " << darkest_secret << "\n";
}

std::string	Contact::get_info(int i)
{
	if (i == 1)
		return first_name;
	else if (i == 2)
		return last_name;
	else if (i == 3)
		return nickname;
	else if (i == 4)
		return phone_number;
	else if (i == 5)
		return darkest_secret;
    return "";
}

void	Contact::set_contact(int	i)
{
	index = i;
	std::cout << "first name: ";
	first_name = read_input("first name: ",1);
	std::cout << "last name: ";
	last_name = read_input("last name: ",1);
	std::cout << "nickname: ";
	nickname = read_input("nickname: ",1);
	std::cout << "phone number: ";
	phone_number = read_input("phone number: ",1);
	while (!ft_isdigit(phone_number))
	{
		std::cerr << "enter valid number!\n";
		std::cout << "phone number: ";
		phone_number = read_input("phone number: ",1);
	}
	std::cout << "darkest secret: ";
	darkest_secret = read_input("darkest secret: ",1);
}
