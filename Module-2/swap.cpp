#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=1,b=2,c=3;
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;

    int mini=min(a,b);
    int maxi=max(a,b);
    int min_btw_more_then_two= min({a,b,c});
    int max_btw_more_then_two= max({a,b,c});
    cout<<"Min"<<mini<<endl;
    cout<<"min_btw_more_then_two"<<min_btw_more_then_two<<endl;
    cout<<"max_btw_more_then_two"<<max_btw_more_then_two<<endl;
    cout<<"Max"<<maxi<<endl;

}
