#include<iostream>
using namespace std;
class student
{
    string name;
    float marks;
    public:

    //paramterised constructrs
    student( string n,float m)
    {
        name=n;
        marks=m;
    }

    void display()
    {
        cout<<"name is ="<<name<<endl;
        cout<<"marks is="<<marks<<endl;
    }
};
int main()
{
    student s1("hero",222.5);
    student s2("zero",300.5);
    s1.display();
    s2.display();
}
