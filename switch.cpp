#include <iostream>
#include <vector>
using namespace std;

int main() {
    int age;

    cout<<"voting time/what is vour age"<<endl;

    cin>>age;

    switch (age)
    {
    case 18:
        
        cout<<"sorry you are a kid you cant vote"<<endl;
        break;
    
    default:
        break;
    }


    return 0;
}
