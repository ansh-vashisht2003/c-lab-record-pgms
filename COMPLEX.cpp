#include<iostream>
using namespace std;
class COMPLEX{
    private:
    int r,i;
public:
    void read();
    void display();
    friend COMPLEX ADD(int a, COMPLEX c2);
    friend COMPLEX ADD(COMPLEX c1, COMPLEX c2);
};
void COMPLEX:: read(){
cin>>r>>i;
}
void COMPLEX :: display(){
cout<<"Complex Number is: "<<r<<" +i"<<i<<endl;
}
COMPLEX ADD(int a, COMPLEX c){
COMPLEX temp;
temp.r=a+c.r;
temp.i=c.i;
return temp;
}
COMPLEX ADD(COMPLEX c1, COMPLEX c2){
COMPLEX temp;
temp.r=c1.r+c2.r;
temp.i=c1.i+c2.i;
return temp;
}

int main(){
    COMPLEX c1,c2,c3,c4;
    cout<<"Enter 1st complex Number: ";
    c1.read();
    c1.display();
    cout<<"Enter 2nd complex Number: ";
    c2.read();
    c2.display();
    cout<<"Enter the integer which needs to be added in 2nd Complex Number: ";
    int a;
    cin>>a;
    c3=ADD(a,c2);
    c3.display();
    c4=ADD(c1,c2);
    c4.display();


}
