/*
 * Name: Luna del Valle
 * File: Span.hpp
 * Created on: viernes oct 24, 2025 17:20:59 CEST
 */

#ifndef SPAN_HPP

#define SPAN_HPP

#include <vector>

class Span {
    public:
        Span ();
        explicit Span (unsigned int N);
		Span (const Span& other);
        virtual ~Span ();

		Span& operator=(const Span& rhs);

		void addNumber(int number);

		int shortestSpan() const;
		int longestSpan() const;

		int operator[](unsigned int index) const;
		unsigned int size() const;

		void fillRandom(unsigned int amount, int min, int max);

		class WrongRangeException: public std::exception {
		public: const char* what() const throw() { return "Invalid range"; }
		};

		class NoSpaceLeftException: public  std::exception {
		public: const char* what() const throw() { return "No space left";}
		};

    private:
		unsigned int _size;
		std::vector<int> _content;

		void _addNoSort(int number);

};

#endif /* end of include guard SPAN_HPP */

