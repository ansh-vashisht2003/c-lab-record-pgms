#include<iostream>
using namespace std;
class EMPLOYEE{
private:
    char name[100];
    int eno;
    int sal;
public:
    void read(){
    cout<<"Enter the Name of person: ";
    cin>>name;
    cout<<"Enter the Employee Number: ";
    cin>>eno;
    cout<<"Enter his salary: ";
    cin>>sal;
    }
    void display(){
    cout<<"Name: "<<name<<endl<<"Eno.: "<<eno<<"Salary: "<<sal<<endl;
    }
};
int main(){
    EMPLOYEE e[10000];
    cout<<"Enter No. of employees: ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" employee Details: "<<endl;
        e[i].read();
    }
    for(int i=0;i<n;i++){
        cout<<i+1<<"th employee Details are: "<<endl;
        e[i].display();
    }
}
