#include<iostream>
using namespace std;
class myBank
{
	private:
	int atmPIN,Balance;
	public:
	string bName,IFSC;
	int accNumber;
	void input()
	{
		atmPIN=4576;
		Balance=4500987;
		bName="Paytm";
		IFSC="paytm0256534";
		accNumber=35353857359;
	}
	void output()
	{
		cout<<"my bank detail..."<<endl;
		cout<<atmPIN<<endl;
		cout<<Balance<<endl;
		cout<<bName<<endl;
		cout<<IFSC<<endl;
		cout<<accNumber<<endl;
	}
};
int main()
{
	myBank m;
	m.input();
	m.output();
	cout<<"Raj tring to access my account..."<<endl;
	//cout<<m.atmPIN<<endl;
	//cout<<m.bName<<endl;
	cout<<m.IFSC<<endl;
	cout<<m.accNumber<<endl;
	
}
