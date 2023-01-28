#include<bits/stdc++.h>
using namespace std;

class Person
{
public:
    int id;
    string name;
    int age;

Person(int i, string n, int a){
      id=i;
      name=n;
      age=a;
    }
Person(int i, string n){
      id=i;
      name=n;
    }
void print_info(){
        cout<<id<<" "<<name<<" "<<age<<endl;
    }

};

int main()
{
    Person p1(2,"Asif",5);
    Person p2(1,"mahdi");
    p1.print_info();
    p2.print_info();

    return 0;
}
