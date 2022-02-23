#include<iostream>
using namespace std;


int main(){
    int d,m,y;
    cin>>d>>m>>y;
    int days_g = (y-1)*365 + (y-1)/4 - (y-1)/100;
    cout<<days_g;

}