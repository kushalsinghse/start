//adress in ram
#include <iostream>

using namespace std;
  
int main(){

    cout<<"rahul what is the adress of rohit"<<endl;


    string x = "Rohit";

    string* y = &x;

    cout<<"Adress of rohit is "<<y<< endl;

    cout << "I think this is adress of rohit's house" <<endl;

    cout<<"yes"<<endl;

    string** z = &y;

    cout<<"Ok, it fine that he is in his house which location in his house"<<endl;

    cout<<"Location of rohit in his house is "<<z<<endl;

return 0;
}
