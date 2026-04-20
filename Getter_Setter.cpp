#include <bits/stdc++.h>
using namespace std;

class name
{
    private:
    int balance;
    public:
    int getbalance()
    {
        return balance;
    }
    void setbalance(int n)
    {
        balance=n;
    }
};
int main()
{
    name birju;
    cout<<birju.getbalance()<<endl;
    birju.setbalance(1000);
    cout<<birju.getbalance()<<endl;
    return 0;
}
