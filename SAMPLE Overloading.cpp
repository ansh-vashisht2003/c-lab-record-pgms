#include<iostream>
using namespace std;

class SAMPLE{
private:
    int i;
    double f;
    char c;
public:
    SAMPLE()  //non parametrised
    {
        i=0;
        f=0.0;
        c='\0';
    }
    SAMPLE (int x , char z,double y )  //Parametrised
    {
        i=x;
        f=y;
        c=z;

    }
    SAMPLE( SAMPLE &s)  //COPY
    {
        i=s.i;
        f=s.f;
        c=s.c;
    }
    SAMPLE (int x, double y, char z='o'){  //Char value was not given by user
        i=x;
        f=y;
        c=z;
    }
    void  display(){
    cout<<"Integer is: "<<i<<"\nDouble value is: "<<f<<"\nCharcater is: "<<c<<endl;
    }
};
int main(){
    SAMPLE s1;
    cout<<"S1: \n";
    s1.display();
    SAMPLE s2(5,'a',6.4);
    cout<<"S2: \n";
    s2.display();
    SAMPLE s3(s2);
    cout<<"S3: \n";
    s3.display();
    SAMPLE s4(8,53.8);
    cout<<"S4: \n";
    s4.display();


}
