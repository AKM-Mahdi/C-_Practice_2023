#include<bits/stdc++.h>
using namespace std;

class Student {
public :
    int id;
    string name;
    int age;

    void user_input( ){
        cin>>id;
        cin>>name;
        cin>>age;
    }
    void print_student_info(){
        cout<<"Id :"<<id<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
    }
};


int main(){
    Student s1,s2,s3;
    s1.user_input();
    s2.user_input();
    s3.user_input();
    s1.print_student_info();
    s2.print_student_info();
    s3.print_student_info();
    return 0;
}
