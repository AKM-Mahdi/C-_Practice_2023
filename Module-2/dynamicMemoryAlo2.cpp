#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    int *x= new int[n]; //accessing memory from heap or int x[n];

    for(int i=0; i<n; i++)
        cin>> x[i];  // doesnt need to use pointer here

    cout<<x<<"\n";
    for(int i=0; i<n; i++)
        cout<< x[i] << "\n";

    delete []x; //removing storage from heap
    return 0;


}
