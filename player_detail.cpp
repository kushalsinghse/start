#include <iostream>
using namespace std;

class player
{
public :
        int age;
        float money;
        int speed;

        

};
int main(){

    string unic ;

    cout<<"enter the name of your player"<<endl;

    cin>>unic ; 



    player altra;

    altra.age=25;

    altra.money = 200.989;

    altra.speed=20;

    cout<<"age of "<<unic<<" is "<<altra.age <<endl;
    cout<<"money near "<<unic<<" is "<<altra.money<<"$" <<endl;
    cout<<"Speed of "<<unic<<" is "<<altra.speed << " sec for 1 hour"<<endl;




return 0;
}
