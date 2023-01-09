#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int sum=0;
    for(int i=0; i<n; i++)
        sum+=a[i];
    cout<<"sum of all no: "<<sum<<endl;

    int mul=1;
    for(int i=0; i<n; i++)
        mul*=a[i];
    cout<<"multiplication of all no: "<<mul<<endl;
    return 0;
}
