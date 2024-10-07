#include<iostream>
#include<string.h>
using namespace std;
class STRING{
int length;
char *name;
public:
    STRING(){
    }
    STRING (char s[]){
    length=strlen(s);
    name=new char[length+1];
    strcpy(name,s);
    }
    void join(STRING A, STRING B){
    length=A.length+B.length;
    name=new char[length+1];
    name=strcpy(name,A.name);
    name=strcat(name,B.name);
    }
    void display(){
    cout<<"Name: "<<name<<endl;
    }
};
int main(){
STRING S1("wel");
STRING S2("fare");
cout<<"S1: "<<endl;
S1.display();
cout<<"S2: "<<endl;
S2.display();
STRING S3;
S3.join(S1,S2);
cout<<"S3: "<<endl;
S3.display();
}
