#include <iostream>
using namespace std;

void update(int n)
{
	n++;
}
void update1(int &n) //refrence keyword
{
	n++;
}
int main()
{
	int val =5;
	cout<<val<<endl;
	update(val); //call by value
	cout<<val<<endl;
	update1(val); //call by refrence
	cout<<val<<endl;
	return 0;
}
