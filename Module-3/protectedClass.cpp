#include<bits/stdc++.h>
using namespace std;

class Employee{
protected:
    int id;
    string name;
};

class Admin : Employee{
private:
    string designation;
public:
    void set_info(int i, string n, string d){
        id=i;
        name=n;
        designation=d;
    }
    void print(){
        cout<<"id :"<<id<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"designation :"<<designation<<endl;
    }
};

int main(){
    Admin a1;
    a1.set_info(1,"Mahdi", "Project Manager");
    a1.print();
return 0;
}
