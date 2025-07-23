/*
 * Name: Luna del Valle
 * File: Fixed
 * Created on: Saturday Jul 12, 2025 16:16:35 CEST
 */

#ifndef FIXED_HPP

#define FIXED_HPP

#include <iostream>

class Fixed {
    public:
        Fixed ();
		Fixed (const Fixed& copy);
        Fixed (const int value);
        Fixed (const float value);

        virtual ~Fixed ();

		Fixed& operator = (const Fixed& op);

        int toInt(void) const;
        float toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);

    private:
		int int_value;
		static const int fractional_bits_number = 8;
		
};

std::ostream& operator<<(std::ostream& out, const Fixed &src);

#endif /* end of include guard FIXED_HPP */

