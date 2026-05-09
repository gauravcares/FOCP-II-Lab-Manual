//store 3*3 matrix and compute its transpose
#include<iostream>
using namespace std;
int main()
{
    int A[3][3],transpose[3][3];

    cout<<"enter the matrix=";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         transpose[j][i]=A[i][j];
       
    //     }
     
    // }
    cout<<"transpose of the matrix is=";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<transpose[j][i]<<" "; // here print similarly as A[i][j] but we have to print transpose so we will print transpose[i][j]
        }
        cout<<endl;
    }
    return 0;
}
