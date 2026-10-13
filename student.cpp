
#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
int rollno;
string name;
float marks;
public:
void accept()
{
cout<<"Enter roll no:";
cin>>rollno;
cout<<"Enter name:";
cin>>name;
cout<<"Enter marks:";
cin>>marks;
}

void display()
{
cout<<"Roll no:"<<rollno<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Marks:"<<marks<<endl;

}
};
//int main()
//{

//Student s;
//s.accept();
//s.display();
//return 0;
//}
int main()
{

Student s[5];
for (int i=0;i<5;i++)
{
s[i].accept();
}
for (int i=0;i<5;i++)
{
s[i].display();
}
return 0;
}
