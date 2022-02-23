#include<iostream>
using namespace std;

void whatday(int d, int m , int y ){

    int days_g = (y-1)*365 + (y-1)/4 - (y-1)/100 +(y-1)/400;

    
    int day_of_months[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(m > 1 ){
    for(int i = 0 ; i < m - 1 ; i ++ ){
         days_g += day_of_months[i];
    }
    if( y % 4 == 0 && y%100 != 0 && m > 2) {
        days_g++;
    }
        days_g += d - 1;
    }
    else{
        days_g+= d - 1;
    }
    
    int x = days_g%7;
    switch (x)
    {
    case 0:
        cout<<"Monday";
        break;
    case 1:
        cout<<"Tuesday";
        break;
    case 2:
        cout<<"Wednesday";
        break;
    case 3:
        cout<<"Thursday";
        break;    
    case 4:
        cout<<"Friday";
        break;
    case 5:
        cout<<"Saturday";
        break;
    case 6:
        cout<<"Sunday";
        break;

    default:
        break;
    }
}

int main(){
    int d,m,y;
    cin>>d>>m>>y;
    whatday(d,m,y);

}