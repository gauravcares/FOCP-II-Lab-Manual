//store  2   3*3 matrix and compute sum
#include<iostream>
using namespace std;
int main()
{
    int A[3][3],B[3][3],sum[3][3];

    cout<<"enter the 1st matrix=";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>A[i][j];

        }
    }
    cout<<"enter the 2nd matrix=";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>B[i][j];
            
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i][j]=A[i][j]+B[i][j];
            

        }
    }
    
    cout<<"sum of two matrices is=";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
