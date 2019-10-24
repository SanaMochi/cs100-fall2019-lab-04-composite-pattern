class LargePositive: public Base {
    public:
        LargePositive() { };

        virtual double evaluate() { return 100000000; }
        virtual string stringify() { return "100000000"; }
};
