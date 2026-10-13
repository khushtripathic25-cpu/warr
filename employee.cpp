#include<iostream>
#include<string>
using namespace std;
class Employee
{
protected:
string name;
int id;

public:
Employee()
{
name="Priya";
id=101;
}

virtual void calsalary()
{
cout<<"Salary is:";
}
void display()
{
cout<<"Enter name:"<<name<<endl;
cout<<"Enter employee ID:"<<id<<endl;
}
};

class PermanentEmp:public Employee
{
private:
double basicsal;
double allowance;

public:
PermanentEmp(string pnm,int pi,double basic,double allow)
{
name=pnm;
id=pi;
basicsal=basic;
allowance=allow;
}
void calsalary()
{
double salary=basicsal+allowance;
cout<<"Salary  of permanent employee is:"<<salary;
}
void perdisplay()
{
display();
cout<<"Basic of the employee is:"<<basicsal<<endl;
cout<<"Allowance of the employee is :"<<allowance<<endl;
}
};

class ContractEmp:public Employee
{
private:
int no_hour;
int sal;

public:
ContractEmp(string cnm,int ci,int hour,int s)
{
name=cnm;
id=ci;
no_hour=hour;
sal=s;
}
void calsalary()
{
double salary=no_hour*salary;
cout<<"Salary  of contract employee is:"<<salary;
}
void cdisplay()
{
display();
cout<<"No of hours is:"<<no_hour<<endl;
cout<<"Salary per hours is :"<<sal<<endl;
}
};

int main()
{
PermanentEmp p("Priya",101,50000,3000);
p.perdisplay();
p.calsalary();

ContractEmp c("Mahi",101,11,3000);
c.cdisplay();
c.calsalary();
return 0;
} 
