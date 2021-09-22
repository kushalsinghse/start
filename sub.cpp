#include <iostream>
using namespace std;

int subt(int a , int b){

    int c = a-b;

    return c;

}

int main(){
    int x,y;
    cout<<"enter first number"<<endl;
    cin>>x;
    cout<<"enter second number"<<endl;
    cin>>y;

 cout<<"The difference is " <<subt(x,y);

 return 0;
}
