#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
private:
int accountno;
string name;
float balance;
static int count;


public:
BankAccount(int ano,string nm,float bal)
{
accountno=ano;
name=nm;
balance=bal;
count++;
cout<<"Bank Account is created successfully!"<<endl;
}

void display()
{
cout<<"Account No:"<<accountno<<endl;
cout<<"Account Holder Name:"<<name<<endl;
cout<<"Account Balance:"<<balance<<endl;
}
static void display_count()
{
cout<<"Number of Bank Account :"<<count<<endl;
}
~BankAccount()
{
cout<<"Account Is Destroyed!"<<endl;
}
};
int BankAccount ::count=0;
int main()
{
BankAccount b1(1,"Shrawani",50000);
BankAccount b2(2,"Himani",60000);

b1.display();
b2.display();

BankAccount::display_count();
return 0;
}
