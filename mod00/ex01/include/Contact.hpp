//                                          _.._  .           .
//  Contact.hpp                           .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class	Contact { 
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		Contact(void);
		Contact(std::string, std::string, std::string, std::string, std::string);
		~Contact(void);
		void	print_overview(int index);
		void	print_info(void);
};

#endif
