#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    Person *father, *mother;

    void print_info(){
        cout<<"Name :"<<name<<endl;
        cout<<"Father's Name :"<<father->name<<endl;
        cout<<"Mother's Name :"<<mother->name<<endl;
    }
};

int main(){
    Person p1;
    p1.name="Mahdi";
    p1.father=new Person; //as it points the Person class
    p1.mother=new Person; //as it points the Person class

    p1.father->name ="Khalil";
    p1.mother->name="Soheli";

    p1.print_info();
    return 0;
}
