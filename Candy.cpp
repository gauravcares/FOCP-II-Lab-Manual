#include <iostream>
using namespace std;
class Candy
{
    string color;
    int points;

public:
    void setCandy(string c, int pts);
    void displayCandy();
    Candy();
    Candy(string l, int w);
};
void Candy::setCandy(string c, int pts)
{
    color = c;
    points = pts;
}
void Candy::displayCandy()
{
    cout << "\nColour: " << color;
    cout << "\nPoints: " << points;
}
Candy::Candy() // default
{
    color = "black";
    points = 0;
}
Candy::Candy(string l, int w) // Parameterized constructor
{
    color = l;
    points = w;
}

int main()
{    /* string c_1, c_2;
     int p_1, p_2;
     cout << "Enter the colour and points of the candy 1: ";
     cin >> c_1 >> p_1;
     cout << "Enter the colour and points of the candy 2: ";
     cin >> c_2 >> p_2;*/
    Candy c1, c2("red", 20);
    /**c1.setCandy(c_1, p_1);*/
    c1.displayCandy();
    /* c2.setCandy(c_2, p_2);*/
    c2.displayCandy();
}
