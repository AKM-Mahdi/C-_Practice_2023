#include<bits/stdc++.h>
using namespace std;

class Person
{
private:
    int id;
    string name;
    int age;
public:
    void set_info(int i, string n, int a){
        id=i;
        name=n;
        age=a;
    }
    void print(){
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
    }
};

int main()
{
Person p1; //  can not access the variable directly from the the class bcz it is private.
p1.set_info(1,"Mahdi", 25);  // can set person's information using set_info() function as it is public
p1.print();

    return 0;
}
