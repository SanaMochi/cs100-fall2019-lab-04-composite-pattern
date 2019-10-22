#ifndef POW_H
#define POW_H

#include "base.hpp"
#include <string>
#include <cmath>

class Pow : public Base {
	Base* Op1;
	Base* Op2;
	public:
		Pow(Base* a, Base* b) : Base() {Op1 = a; Op2 = b;}
		
		virtual double evauluate() {
			return pow(Op1->evaluate(), Op2->evaluate());
		}
		virtual std::string stringify() {
			return std::to_string(Op1->evaluate()) + "**" + std::to_string(Op2->evaluate()) + "=" + std::to_string(pow(Op1->evaluate(), Op2->evaluate()));
		}
};
#endif // POW_H
