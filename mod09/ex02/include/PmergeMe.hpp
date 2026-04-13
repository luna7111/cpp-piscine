#ifndef PMERGEME_HPP

#define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <ctime>
#include <vector>
#include <list>

extern std::vector<unsigned int> g_jacobstal_sequence; 

class PmergeMe {
    public:
		PmergeMe(const std::string& input);
        virtual ~PmergeMe ();

		void sortContents();

		class InvalidSequenceException: public std::exception {
			public: const char* what() const throw() { return "Unexpected character in sequence"; }
		};
		class UnsortedSequenceException: public std::exception {
			public: const char* what() const throw() { return "This action requires the sequence to be sorted"; }
		};

		std::string getContents() const;
		unsigned int getTimeToSortVector() const;
		unsigned int getTimeToSortList() const;
    private:
		PmergeMe ();
		PmergeMe (const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& rhs);

		unsigned int _timeToSortVector;
		unsigned int _timeToSortList;

		std::vector<unsigned int> _vecContent;
		std::list<unsigned int> _listContent;

		bool _hasBeenSorted;

		void _mergeInsertion(std::vector<unsigned int>& to_sort);
		void _mergeInsertion(std::list<unsigned int>& to_sort);
};

#endif /* end of include guard PMERGEME_HPP */
