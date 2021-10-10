#include <iostream>
using namespace std;

int incr(int* num){

    (*num)++;
}

int main(){

    int a=101;

    incr(&a);

    cout<<a<<endl;

    //int a=101;
    //int& b=a;
    //cout<< b <<endl;

    return 0;
}
