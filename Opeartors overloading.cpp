#include<iostream>
using namespace std;
class COMPLEX{
private:
    int r,f;
public:
    void read(int r1,int i1){
    r=r1;
    f=i1;
    }
    void display(){
    cout<<r<<" +i "<<f<<endl;
    }
    COMPLEX operator+(COMPLEX c){
    COMPLEX temp;
    temp.r=r+c.r;
    temp.f=f+c.f;
    return temp;
    }
    COMPLEX operator-(COMPLEX c){
    COMPLEX temp;
    temp.r=r-c.r;
    temp.f=f-c.f;
    return temp;
    }
};
int main(){
COMPLEX c1,c2,c3,c4;
c1.read(15,17);
cout<<"C1: \n";
c1.display();
c2.read(5,7);
cout<<"C2: \n";
c2.display();
c3=c1+c2;
cout<<"C3: \n";
c3.display();
c4=c1-c2;
cout<<"C4: \n";
c4.display();
}
