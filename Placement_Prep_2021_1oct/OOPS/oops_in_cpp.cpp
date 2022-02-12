// Object oriented programming in c++
/*
#include<iostream>
using namespace std;
class Employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1,int b1,int c1);
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of b is "<<c<<endl;
            cout<<"The value of b is "<<d<<endl;
            cout<<"The value of b is "<<e<<endl;

        }
};
void Employee :: setData(int a1, int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}
int main(){
    Employee harry;
    // harry.a = 134;   // this will throw an error as it is private
    harry.d = 32;
    harry.e = 90;
    harry.setData(1,2,4);
    harry.getData();

    return 0;
}
*/

// Nesting of member function

#include<iostream>
#include<string>
using namespace std;

class Binary{
    string s;
    public:
        void read(void);
        void chk_bin(void);
        void ones_compliment(void);
        void display(void);
};
void Binary::read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void Binary::chk_bin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Incorrect binary format "<<endl;
            exit(0);
        }
    }
}
void Binary :: ones_compliment(void){
    chk_bin();
    for(int i=0;i<s.length();i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
    }
}
void Binary :: display(void){
    cout<<"Displaying your binary number "<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
int main(){
    Binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}