#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <stdlib.h>

class Rand : public Base {
    public:
        Rand() : Base() { }
        virtual double evaluate() { return 13.7; }
        virtual std::string stringify() { return "13.7"; }
};

#endif //__RAND_HPP__
