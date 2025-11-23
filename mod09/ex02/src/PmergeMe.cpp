/*
 * Name: Luna del Valle
 * File: PmergeMe.cpp
 * Created on: sábado nov 15, 2025 17:51:29 CET
 */

#include <PmergeMe.hpp>
#include <sstream>
#include <ctime>

/* Default constructor */
PmergeMe::PmergeMe() {}

/* Copy constructor */
PmergeMe::PmergeMe(const PmergeMe& source) {
    *this = source;
}

/* Copy assignment operator */
PmergeMe& PmergeMe::operator=(const PmergeMe& rhs) {
    (void)rhs;
    return (*this);
}

/* Default destructor */
PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const std::string &input):
_hasBeenSorted(false)
{
    size_t i = 0;
    size_t input_size = input.size();

    while (i < input_size) {
        while (std::isspace(input[i])) {
            i++;
        }
        if (std::isdigit(input[i]) == false) {
            throw InvalidSequenceException();
        }
        if (i >= input_size) {
            break;
        }
        unsigned int current_number = 0;
        while (isdigit(input[i])) {
            current_number *= 10;
            current_number += input[i] - '0';
            i++;
        }
        _listContent.push_back(current_number);
        _vecContent.push_back(current_number);
    }
}

void PmergeMe::_mergeInsertion(std::list<unsigned int> &to_sort) {

    std::list<unsigned int> S;
    std::list<unsigned int> X;

    while (to_sort.size() >= 2) {
        std::list<unsigned int>::iterator n1 = to_sort.begin();
        std::list<unsigned int>::iterator n2 = to_sort.begin();
        ++n2;
        if (*n1 > *n2) {
            S.push_front(*n1);
            X.push_front(*n2);
        }
        else {
            X.push_front(*n1);
            S.push_front(*n2);
        }
        to_sort.pop_front();
        to_sort.pop_front();
    }
    if (to_sort.empty() == false) {
        X.push_front(to_sort.front());
        to_sort.pop_front();
    }

    if (S.size() > 1) {
        _mergeInsertion(S);
    }

    for (std::list<unsigned int>::iterator X_it = X.begin(); X_it != X.end(); ++X_it) {

        std::list<unsigned int>::iterator S_it = S.begin();
        while (S_it != S.end() && *S_it < *X_it) {
            ++S_it;
        }
        S.insert(S_it, *X_it);
    }

    to_sort = S;
}

void PmergeMe::_mergeInsertion(std::vector<unsigned int> &to_sort) {

    std::vector<unsigned int> S;
    std::vector<unsigned int> X;

    while (to_sort.size() >= 2) {
        unsigned int n1 = to_sort[to_sort.size() - 1];
        unsigned int n2 = to_sort[to_sort.size() - 2];
        if (n1 > n2) {
            S.push_back(n1);
            X.push_back(n2);
        }
        else {
            X.push_back(n1);
            S.push_back(n2);
        }
        to_sort.pop_back();
        to_sort.pop_back();
    }
    if (to_sort.empty() == false) {
        X.push_back(to_sort.back());
        to_sort.pop_back();
    }

    if (S.size() > 1) {
        _mergeInsertion(S);
    }

    for (std::vector<unsigned int>::iterator X_it = X.begin(); X_it != X.end(); ++X_it) {

        std::vector<unsigned int>::iterator S_it = S.begin();
        while (S_it != S.end() && *S_it < *X_it) {
            ++S_it;
        }
        S.insert(S_it, *X_it);
    }

    to_sort = S;
}

void PmergeMe::sortContents() {
    std::clock_t start_time_flag, end_time_flag;

    start_time_flag = std::clock();
    _mergeInsertion(_vecContent);
    end_time_flag = std::clock();
    _timeToSortVector = (end_time_flag - start_time_flag) / (CLOCKS_PER_SEC / 1000000);

    start_time_flag = std::clock();
    _mergeInsertion(_listContent);
    end_time_flag = std::clock();
    _timeToSortList = (end_time_flag - start_time_flag) / (CLOCKS_PER_SEC / 1000000);

    _hasBeenSorted = true;
}

unsigned int PmergeMe::getTimeToSortList() const{
    if (_hasBeenSorted == false) {
        throw UnsortedSequenceException();
    }
    return _timeToSortList;
}

unsigned int PmergeMe::getTimeToSortVector() const {
    if (_hasBeenSorted == false) {
        throw UnsortedSequenceException();
    }
    return _timeToSortVector;
}

//std::string PmergeMe::getContents() const {
//    std::stringstream content_string;
//
//    for (size_t i = 0; i < _vecContent.size(); i++) {
//        content_string << _vecContent[i];
//        if (i + 1 < _vecContent.size()) {
//            content_string << ", ";
//        }
//    }
//    return content_string.str();
//}

std::string PmergeMe::getContents() const {
    std::stringstream content_string;

    std::list<unsigned int>::const_iterator it = _listContent.begin();
    std::list<unsigned int>::const_iterator end = _listContent.end();

    while (it != end) {
        content_string << *it;
        ++it;
        if (it != end) {       // si no es el último
            content_string << ", ";
        }
    }
    return content_string.str();
}
