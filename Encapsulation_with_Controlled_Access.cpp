#include <iostream>
using namespace std;

class authorized
{
    private:
    int balance;
    public:
    authorized(int val, int pass)
    {
        this->balance=0;
        if(pass==200105)
        {
            this->balance=val;
        }
    }
    int getbalance()
    {
        return this->balance;
    }
    void setbalance(int n, int pass)
    {
        if(pass==200105)
        {
        this->balance=n;
        }
    }
};

int main()
{
    authorized dev(10000,200105);
    cout<<dev.getbalance()<<endl;
    dev.setbalance(50000,201221);
    cout<<dev.getbalance()<<endl;
    dev.setbalance(50000,200105);
    cout<<dev.getbalance()<<endl;
    return 0;
}
