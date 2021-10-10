#include <iostream>
using namespace std;

float rec(int presantmoney, float aftermoney=8.111){

    return presantmoney*aftermoney;

}

int main(){

    int money = 1100;

cout<<"if you have "<<money<<" Rs in your bank account then  you money will get "<<rec(money)<<
" Rs after 5 weeks"<<endl;

return 0;
}
