#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int>a= {2,3,5,7,5,8,5};
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==5)
        {
            cout<<a[i]<<endl;
            return 0;
        }
    }
    cout<<"Not found";
    return 0;
}

