#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>a;
    a.resize(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a.begin(), a.end());

    int distinct_Val=0;
    for(int i=0; i<n; i++){
        if(a[i]!=a[i+1]){
            distinct_Val++;
        }
    }

    cout<<distinct_Val;
    return 0;
}
