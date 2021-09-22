#include <iostream>

using namespace std;

int main() {

    int age;

    cout<<"voting time/what is vour age"<<endl;

    cin>>age;
    
    if (age<18)
    {
        cout<<"sorry you are a kid you cant vote"<<endl;
    }

    else if(age==18){
        cout<<"congrations you can vote"<<endl;
    }

    else{
        cout<<"congrations you can vote"<<endl;
    }

    return 0;
}
