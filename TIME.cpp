#include<iostream>
using namespace std;
class TIME{
public:
    int hrs;
    int mins;
    void read(int h,int m){
    hrs=h;
    mins=m;
    }
    void display(){
    cout<<"Hour: "<<hrs<<" Minutes: "<<mins<<endl;
    }
    TIME add(TIME t1,TIME t2){
    TIME temp;
    temp.hrs=t1.hrs+t2.hrs;
    temp.mins=t1.mins+t2.mins;
    int a=temp.mins/60;
    temp.hrs+=a;
    temp.mins%=60;
    return temp;
    }

};
int main(){
    TIME t1,t2,t3;
    t1.read(4,34);
    cout<<"A: \n";
    t1.display();
    t2.read(5,26);
    cout<<"B: \n";
    t2.display();
    t3=t3.add(t1,t2);
    cout<<"C: \n";
    t3.display();
}
