#include<iostream>
using namespace std;

typedef struct park
{
    /* data */
    int pakno;
    double pakemi;
    char pakrank;
}ep;


int main(){
 
    ep park cool;

    cool.pakno=1;
    cout<<"cool is the number "<<cool.pakno<<" park in the world"<<endl;

    cool.pakemi=888.999;

    cout<<"emi of the cool park is "<<cool.pakemi<<endl;

    cool.pakrank = 'A';

    cout<<"rank of the cool park is "<<cool.pakrank<<"++"<<endl;
    return 0;
}
//cool is just a example
