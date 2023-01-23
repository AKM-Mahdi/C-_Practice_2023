#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> x;
    for(int i=0; i<10; i++){
         cout<<"size of array :"<<x.size()<<endl;
        x.push_back(i) ; // push element to vector
    }
    x.insert(x.begin()+1, 100);
    x.erase(x.begin()); // delete using index
    x.pop_back(); // delete the last element
    x.resize(5); // resize the vector
    for(int i=0; i<x.size(); i++)
    {
        cout<<x[i]<<endl;
    }

    vector<float> y= {1.2,1.3,1.4,1.5};
    y.resize(3);
    for(int i=0; i<y.size(); i++)
        cout<<y[i]<<endl;
    return 0;
}

