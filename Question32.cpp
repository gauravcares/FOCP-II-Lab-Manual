#include<iostream>
using namespace std;
int main()
{
 int arr[5] ,count =0;
 cout<<"enter the number";

 for(int i=0;i<5;i++)
 {
 cin>>arr[i];

 if(arr[i]%3==0&&arr[i]%5==0)
 {
    count++;
 }
}
cout<<"count = "<<count;
return 0;
}

 
