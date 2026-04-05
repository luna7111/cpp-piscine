#include "../include/Bitcoinexchange.hpp"

static const unsigned int JAN = 1, FEB = 2, MAR = 3, APR = 4, MAY = 5, JUN = 6, JUL = 7, AUG = 8, SEP = 9, OCT = 10, NOV = 11, DEC = 12;

static bool yearIsLeap(const int year) {
    return year % 4 && (year % 100 != 0 || year % 400);
}
