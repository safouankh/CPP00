#include "phonebook.hpp"

int	PhoneBook::get_num_of_contacts(void)
{
	return (num_of_contacts);
}

int ft_isdigit(std::string str)
{
    int i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

void	PhoneBook::print_contact_for_search(int i)
{
	if (i < 8 && i < num_of_contacts && i >= 0)
		contacts[i].print_info();
	else
	{
		std::cout << "no such contact try again: ";
		std::string	str = read_input("", 0);
        while(str.length() > 2 || str.empty() || !ft_isdigit(str))
        {
            std::cout << "no such contact try again: ";
            str = read_input("", 0);
        }
		print_contact_for_search(std::atoi(str.c_str()));
	}
}

void	PhoneBook::reset_index(void)
{
	if (index >= 8)
		index = 0;
}

void	PhoneBook::increase_index(void)
{
	index += 1;
	num_of_contacts += 1;
}

int	PhoneBook::get_index(void)
{
	return index;
}

void	PhoneBook::set_contact_arr(int	index)
{
	contacts[index].set_contact(index);
}

PhoneBook::PhoneBook(void)
{
	index = 0;
	num_of_contacts = 0;
}

std::string	perfect_str(std::string old_str)
{
	std::string new_str = old_str;
	if (old_str.length() > 10)
		new_str = old_str.substr(0,9) + ".";
	return new_str;
}

void	PhoneBook::print_contacts(void)
{
	std::string str;
	std::cout << "---------------------------------------------\n";
	std::cout << "|"<< std::setw(10) << "index";
	std::cout << "|"<< std::setw(10) << "first name";
	std::cout << "|"<< std::setw(10) << "last name";
	std::cout << "|"<< std::setw(10) << "nickname"  << "|\n";
	std::cout << "---------------------------------------------\n";
	for (int i = 0;i < num_of_contacts && i < 8;i++)
	{
		std::cout << "|"<< std::setw(10) << i;
		std::cout << "|"<< std::setw(10) << perfect_str(contacts[i].get_info(1));
		std::cout << "|"<< std::setw(10) << perfect_str(contacts[i].get_info(2));
		std::cout << "|"<< std::setw(10) << perfect_str(contacts[i].get_info(3))  << "|\n";
		std::cout << "---------------------------------------------\n";
	}
}
