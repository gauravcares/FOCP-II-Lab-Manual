// online shopping cart
#include<iostream>
using namespace std;
class product
{
    string productname;
    float price;
    int quantity;
    public:
    product()
    {
        productname="chicken";
        price=500;
        quantity=8;
    }
    product(string p,float pr,int q)
    {
        productname=p;
        price=pr;
        quantity=q;
    
    }
 float calculate_bill()
    {
        return price*quantity;
    }
    void display()
    {
        cout<<"product name is="<<productname<<endl;
        cout<<"price is="<<price<<endl;
        cout<<"quantity is="<<quantity<<endl;
        cout<<"total cost is="<<calculate_bill()<<endl;
    }
};
int main()
{
    product p1;
    p1.display();
    cout<<endl;
    product p2("egg",10.0,12);
    p2.display();
    return 0;}
