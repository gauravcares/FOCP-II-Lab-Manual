//bank account summary
#include<iostream>
using namespace std;

class bankaccount
{
    string accountholdername;
    int accountnumber;
    double balance;
    public:
    void input_details()
    {
        cout<<"enter the holder name:";
        cin>>accountholdername;

        cout<<"account number:";
        cin>>accountnumber;

        cout<<"balance is:";
        cin>>balance;
    }
    void display_details()
    {
       cout<<" account holder name"<<accountholdername<<endl;
       cout<<"number is "<<accountnumber<<endl;
       cout<< "balance is ="<<balance<<endl;
    }
    void deposit()
    {
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    balance = balance + amount;
    cout << "Deposit successful!" << endl;
    }
    void withdraw()
    {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } 
        else 
        {
            balance = balance - amount;
            cout << "Withdrawal successful!" << endl;
        }

}};
int main()
{
  bankaccount s1;
  s1.input_details();
  s1.display_details();
    s1.deposit();
  s1.display_details();
    s1.withdraw();
    s1.display_details();
 return 0;

}
