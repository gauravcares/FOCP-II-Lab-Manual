//RECTANGLE CALCULATOR
#include<iostream>
using namespace std;

class rectangle
{
   float length;
   float widhth;
   public:
   void input_detail()
   {
    cout<<"enter the length of rect=";
    cin>>length;
    cout<<"enter the width of rec=";
    cin>>widhth;
   }
   float calculate_area()
   {
    float area;
    area=length*widhth;
    return area;

   }
   void calculate_perimeter()
    {
     float perimeter;
     perimeter=2*(length+widhth);
     cout<<"the perimeter of rectangle is="<<perimeter;
    }
    void display_detail()
    {
        cout<<"\nthe length of rectangle is="<<length;
        cout<<"\nthe width of rectangle is="<<widhth;
        cout<<"\nthe area of rectangle is="<<calculate_area();
        cout<<"\nthe perimeter of rectangle is="<<2*(length+widhth);
    }
};
int main()
{
    rectangle r1;
    r1.input_detail();
    r1.calculate_area();
    r1.calculate_perimeter();
    r1.display_detail();

}
