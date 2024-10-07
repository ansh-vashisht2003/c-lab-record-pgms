#include <iostream>

using namespace std;
class BankAccount{
char name[100];
int acc,bal;
public:
    void read(){
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your Account Number: ";
    cin>>acc;
    cout<<"Enter the initial balance: ";
    cin>>bal;
    }
    void deposit(){
    cout<<"Enter amount to be deposited: ";
    int amt;
    cin>>amt;
    bal+=amt;
    put_balance();
    }
    void withdraw(){
    cout<<"Enter amount to be withdrawn: ";
    int amt;
    cin>>amt;
    if (bal<amt)
        cout<<"Balance is less \n";
    else
        bal-=amt;
    put_balance();
    }
    void put_balance(){
    cout<<"Current Balance is: "<<bal;
    }
};
int main()
{
    
    BankAccount b;
    b.read();
    b.deposit();
    b.withdraw();
    return 0;
}
