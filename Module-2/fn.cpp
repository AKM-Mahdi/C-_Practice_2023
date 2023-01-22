#include<bits/stdc++.h>
using namespace std;

//void change(int*x, int *y){
//    int temp=*x;
//    *x=*y;
//    *y=temp;
//}
void change(int &x, int &y){
    int temp=x;
        x=y;
        y=temp;
}
int main(){
    int x=5;
    int y=10;

    change(x,y);
    cout<<"X : "<<x<<endl;
    cout<<"Y : "<<y;
}

