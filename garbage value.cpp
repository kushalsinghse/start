#include <iostream>
using namespace std;

class garb
{
     
    public:
        float K , M;

        //we are not giving the value of K,M
        
        void ret(){
            cout << "The value K is " <<K<<" and the value of M is "<<M<<endl;
        };


};

  
int main(){
 
//write main code here

garb e;

e.ret();




return 0;
}
