#include<iostream>
using namespace std;

union cars
{
    /* data */
    float BMWx6;
    float Lamborghini ;
};


//it takes fust one value atatime
int main(){

 union cars cas;
 cas.Lamborghini=3.10 ;
 cas.BMWx6=96.90 ;


cout<<"prise of Lamborghini is Rs."<<cas.Lamborghini<<" crore"<<endl;
}
