#include<bits/stdc++.h>
using namespace std;

class Student{
private:
    int id;
    string name;
    int age;
public:
    Student (){
    } // as we are taking an array
    Student(int id, string name, int age){
        this->id=id;
        this->name=name;
        this->age=age;
    }

    void print_info(){
        cout<<id<<" ";
        cout<<name<<" ";
        cout<<age<<endl;
    }
};

int main(){

    Student s[10];

    for(int i=0; i<10; i++)
        s[i]= Student(i, "mahdi", 25);
    for(int i=0; i<10; i++)
        s[i].print_info();
return 0;
}
