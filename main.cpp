#include <iostream>

using namespace std;

class BigInt{
    public:
        BigInt(){
            neg = false;
            nDig = 1;
            d = new int(1);
            d[0] = 0;
        }
    private:
        bool neg;
        int nDig;
        int8_t* d = nullptr;
}

int main(){
    BigInt n;
    cin >> n;
    cout << "testando"<< endl;
    return 0;
}