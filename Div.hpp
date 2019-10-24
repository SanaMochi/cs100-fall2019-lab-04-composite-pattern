#ifndef DIV_H
#define DIV_H

#include "base.hpp"
#include <string>

class Div : public Base {
	Base* Op1;
	Base* Op2;
	public:
		Div(Base* a, Base* b) : Base() {Op1 = a; Op2 = b;}
		
		virtual double evaluate() {
			return Op1->evaluate() / Op2->evaluate();
		}
		virtual std::string stringify() {
			return (std::to_string(Op1->evaluate()) + " / " + std::to_string(Op2->evaluate()));
		}
};

#endif // DIV_H
