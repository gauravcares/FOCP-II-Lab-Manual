// valid username
#include<iostream>
using namespace std;
int main()
{
 string username;
 char ch;

 cout<<"enter the username";
 getline(cin,username);

 int iuppe=0,ilower=0,digit=0,special_char=0;

 for(int i=0;i<username.length();i++)
 {
    ch=username[i];
     
    if(ch>='A'&&ch<='Z')
    {
        iuppe=1;
    }
    else if(ch>='a'&&ch<='z')
    {
        ilower=1;
    }
    else if(ch>='0'&&ch<='9')
    {
        digit=1;
    }
    else
    {
        special_char=1;
    }
 }
    if(iuppe && ilower && digit && special_char)
    {
        cout<<"valid username";
    }
    else
    {
        cout<<"invalid username";
    }

return 0;


}
    
