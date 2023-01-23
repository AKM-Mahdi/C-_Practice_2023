#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a={3,2,1,5,4};
    cout<<"before sorting"<<endl;
    for(int i=0; i<a.size(); i++)
        cout<<a[i]<<" ";

    //sort(a.begin(), a.end()); // sort the whole vector
    sort(a.begin()+1, a.begin()+3); //sort from index 1 to 3;
    cout<<"after sorting"<<endl;
    for(int i=0; i<a.size(); i++)
        cout<<a[i]<<" ";
    return 0;
}

