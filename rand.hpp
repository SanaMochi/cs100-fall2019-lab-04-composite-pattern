#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <stdlib.h>

class Rand : public Base {
	double value = rand() % 100;
    public:
        Rand() : Base() { }
        virtual double evaluate() { return value; }
        virtual std::string stringify() { return std::to_string(value); }
};

#endif //__RAND_HPP__
