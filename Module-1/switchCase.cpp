#include<iostream>
using namespace std;

int main()
{

    int day;
    cin>>day;

    switch(day)
    {
    case 1:
    cout<< "saturday";
    break;
    case 2:
    cout<< "sunday";
    break;
    case 3:
    cout<< "monday";
    break;
    default:
    cout<<"input did not matched";
    }

    return 0;
}
