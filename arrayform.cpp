#include <iostream>
#include <array>
using namespace std;
  
int main(){

 int e;

 cin>>e;
 
 int Myarray[e];

    for (int  i = 0;  i < e; i++)
    {
         cin>>Myarray[i];
         if (i==e-1)
         {
         cout<<Myarray[i];

         }         
    }
    
return 0;
}