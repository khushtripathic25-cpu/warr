#include <iostream>
#include <fstream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    float salary;

    void input()
    {
        cout << "Enter ID, Name and Salary: ";
        cin >> id >> name >> salary;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;

    e.input();

    ofstream fout("employee.txt");
    fout << e.id << " " << e.name << " " << e.salary;
    fout.close();

    ifstream fin("employee.txt");
    fin >> e.id >> e.name >> e.salary;
    fin.close();

    cout << "\nEmployee Record:\n";
    e.display();

    return 0;
}