/*
 * Name: Luna del Valle
 * File: Fixed
 * Created on: Saturday Jul 12, 2025 16:16:35 CEST
 */

#ifndef FIXED_HPP

#define FIXED_HPP


class Fixed {
    public:
        Fixed ();
		Fixed (const Fixed& copy);
        virtual ~Fixed ();
		Fixed& operator = (const Fixed& op);
		int getRawBits(void) const;
		void setRawBits(int const raw);

    private:
		int int_value;
		static const int fractional_bits_number = 8;
		
};

#endif /* end of include guard FIXED_HPP */

