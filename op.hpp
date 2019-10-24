#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
	double Value;
    public:
        Op(double value) : Base() { Value = value;}
        virtual double evaluate() { return Value; }
        virtual std::string stringify() { return std::to_string(Value); }
};

#endif //__OP_HPP__
