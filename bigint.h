#include <iostream>

class BigInt{
    public:
        BigInt();
        BigInt(const BigInt& B);

        ~BigInt();
        void clear();
        bool isNeg() const;
        int size() const;
    private:
        BigInt(bool Neg, int NDig);
        bool neg;
        int nDig;
        int8_t* d;
};
