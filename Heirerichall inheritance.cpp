#include<iostream>
using namespace std;
class STUDENTS{
protected:
    char name[200];
    char usn[100];
public:
    void read(){
    cout<<"Enter students name: \n";
    cin>>name;
    cout<<"Enter his usn: \n";
    cin>>usn;
    }

};
class MEDICAL :  public STUDENTS{
private:
    int yr;
public:
    void getmed(){
    cout<<"Enter his yr: ";
    cin>>yr;
    }
    void display(){
    cout<<"Students name: ";
    cout<<name<<endl;
    cout<<"His usn: ";
    cout<<usn<<endl;
    cout<<"His yr: "<<yr<<endl;
    }
};
class ENGINNERING :  public STUDENTS{
private:
    int sem;
public:
    void geteng(){
    cout<<"Enter his semester: ";
    cin>>sem;
    }
    void display(){
    cout<<"Students name: ";
    cout<<name<<endl;
    cout<<"His usn: ";
    cout<<usn<<endl;
    cout<<"His sem: "<<sem<<endl;
    }
};
int main(){
MEDICAL m1;
cout<<"Medical: \n";
m1.read();
m1.getmed();
m1.display();

ENGINNERING e;
cout<<"Engineering: \n";
e.read();
e.geteng();
e.display();
}
