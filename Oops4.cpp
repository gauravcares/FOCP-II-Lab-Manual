// employee information salary

#include<iostream>
using namespace std;
class employee
{
    string name;
    int empld;
    double month_salary;
    public:
    void input_details()
    {
        cout<<" enter the name of employee=";
        cin>>name;
        cout<<"enter the employee id=";
        cin>>empld;
        cout<<"enter the monthly salary=";
        cin>>month_salary;
    }
    double calculateannualsalary()
    {
        return month_salary*12;
    }
    void display_deatils()
    {
        cout<<"employee name is "<<name<<endl;
        cout<<"employee id is "<<empld<<endl;
        cout<<"monthly salary is "<<month_salary<<endl;
        cout<<"annual salary is "<<calculateannualsalary()<<endl;
    }

};
int main()
{
    employee s1;
    s1.input_details();
    s1.calculateannualsalary();
    s1.display_deatils();

}
