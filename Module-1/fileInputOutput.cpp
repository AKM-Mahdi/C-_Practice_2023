#include<bits/stdc++.h>
using namespace std;

int main (){
    ofstream of;
    of.open("1.txt");
    of<< "file no -01";

    ifstream ifs;
    ifs.open("0.txt");
    int x;
    double y,z;
    ifs>>x>>y>>z;
    cout<<x<<" "<<y<<" "<<z;

    of.close();
    ifs.close();
    return 0;

}
