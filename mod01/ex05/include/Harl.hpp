//                                          _.._  .           .
//  Harl.hpp                              .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

#include <iostream>

class Harl {
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);
};
