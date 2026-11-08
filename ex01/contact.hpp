#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>
#include <iomanip>

class	Contact
{
	private:
		int	index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		std::string	get_info(int i);
		void		set_contact(int	i);
		void		print_info(void);
};

#endif