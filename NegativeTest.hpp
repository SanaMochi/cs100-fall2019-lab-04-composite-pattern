class NegativeTest: public Base {
    public:
        NegativeTest() { };

        virtual double evaluate() { return -5; }
        virtual string stringify() { return "-5"; }
};
