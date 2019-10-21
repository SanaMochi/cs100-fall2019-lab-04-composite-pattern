class NevativeTest: public Base{
	public:
		NegativeTest(){};
		
		virtual double evaluate(){ return -7.5; }
		virtual double stringify(){ return "-7.5"; }
}
