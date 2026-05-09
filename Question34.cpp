//storing marks 
#include<iostream>
using namespace std;
int main()
{
    int arr[3][5];  // means 3 baache row m h and 5 coloum h sybjects k
 cout<<"enter the marks of 5 students in 3 subjects=";
  
 for(int i=0;i<3;i++)
 {
    for(int j=0;j<5;j++)
    {
        cin>>arr[i][j];
    }
 }
 for(int i=0;i<3;i++)
 {
    for(int j=0;j<5;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }
 cout<<"marks in 2nd subjects of 1st student is=";
 cout<<arr[0][1]<<endl;

 cout<<"marks in 5th subject of 3rd student is=";
 cout<<arr[2][4]<<endl;
 
 return 0;

}
