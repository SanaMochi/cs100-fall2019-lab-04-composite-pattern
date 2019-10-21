class ZeroTest: public Base {
    public:
        ZeroTest() { };

        virtual double evaluate() { return 0; }
        virtual string stringify() { return "0"; }
};
