#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "contact.hpp"

std::string	read_input(std::string text,int	i);
int ft_isdigit(std::string str);

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int	index;
		int	num_of_contacts;
	public:
		PhoneBook(void);
		int		get_index(void);
		int		get_num_of_contacts(void);
		void	set_contact_arr(int	index);
		void	print_contacts(void);
		void	reset_index(void);
		void	increase_index();
		void	print_contact_for_search(int i);
};

#endif