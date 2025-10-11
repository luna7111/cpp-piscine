/*
 * Name: luna
 * File: Format.hpp
 * Created on: 9/10/25 3:30
 */

#ifndef EX00_FORMAT_HPP
#define EX00_FORMAT_HPP

class Format {
    private:
        bool _formatIsValid;
        bool _charIsValid;
        char _charNotation;
        bool _intIsValid;
        int _intNotation;
        float _floatNotation;
        bool _floatIsValid;
        double _doubleNotation;
    public:
        Format();
        ~Format();
        Format(const Format& src);
        Format& operator = (const Format& rhs);

        bool getFormatValidity() const;
        bool getCharValidity() const;
        char getCharNotation() const;
        int getIntNotation() const ;
        float getFloatNotation() const;
        double getDoubleNotation() const;

        void setInvalidFormat();
        void setNoChar();
        void addCharNotation(char c);
        void addIntNotation(int n);
        void addFloatNotation(float n);
        void addDoubleNotation(double n);
        void print();
};

#endif //EX00_FORMAT_HPP
