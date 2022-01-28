#include <iostream>
using namespace std;
  
int main(){
    int T;
    int quant;  
    int choice;
    string name;
    string name2 = "kushal";
    int age;
    int idproff;
    double number;

    int Qrooms=1000, Qpizza=100, Qpasta=100, Qburger=100, Qmilkshake=100, Qsandwich=100;
    int Srooms=0, Spizza=0, Spasta=0, Sburger=0, Smilkshake=0, Ssandwich=0;
    int Total_rooms=0,  Total_pizza=0,  Total_pasta=0,  Total_burger=0,  Total_milkshake=0,  Total_sandwich=0;


   /* cout<<"Quantity of items we have"<<endl;
    cout<<"rooms Quantity:"<<endl;
    cin>>Qrooms;
    cout<<"Quantity of pizza : "<<endl;
    cin>>Qpizza;
    cout<<"Quantity of pasta : "<<endl;
    cin>>Qpasta;
    cout<<"Quantity of burger : "<<endl;
    cin>>Qburger;
    cout<<"Quantity of milkshake : "<<endl;
    cin>>Qmilkshake;
    cout<<"Quantity of sandwich : "<<endl;
    cin>>Qsandwich;*/
h:
    cout<<"                                  please select from the menu option            " <<endl;
    cout<<"1.checkin"<<endl;
    cout<<"2.rooms"<<endl;
    cout<<"3.pizza"<<endl;
    cout<<"4.pasta"<<endl;
    cout<<"5.burger"<<endl;
    cout<<"6.milkshake"<<endl;
    cout<<"7.sandwich"<<endl;
    cout<<"8.Information regarding sales and collection"<<endl;
    cout<<"9.Exit"<<endl;
    cout<<"10.checkout"<<endl;

    cout<<"                                      Please enter your choise!                        "<<endl;

    cin>>choice;

    switch   
    (choice){

                case 1:

                cout<<"     hello there please enter your age"<<endl;
                cin>>age; 

                if(age>=18){         
                 cout<<"      hello there please enter your name"<<endl;
                cin>>name;               

                cout<<"      hello there please enter your id proff"<<endl;
                cin>>idproff;

                cout<<"     hello there please enter your number"<<endl;
                cin>>number;

                cout << "congratulation You are chech in" <<endl;
                }

                else{
                cout<<"                 sorry you are a child you can't check in"<<endl;
                }    break;

        case 2:
            cout << "             Enter the number of rooms you want       " << endl;
            cin>>quant;

        if (Qrooms-Srooms >=quant)
        {
            Srooms=Srooms+quant;
            Total_rooms=Total_rooms+quant*(5000);
            cout<<"                                 "<<quant<<" room/rooms has beem alloted to you"<<endl;
        }

        else
        {
            cout<<"                                       Only " <<Qrooms-Srooms<<" are reamaing in this hotel";
        }
        break;
        
        case 3:
            cout << "                                  Hou many pizza/pizzas do you want?                         " << endl;
            cin>>quant;

        if (Qpizza-Spizza >=quant)
        {
            Spizza=Spizza+quant;
            Total_pizza=Total_pizza+quant*(100);
            cout<<"                   "<<quant<<" pizza/pizzas you have ordered"<<endl;
        }

        else
        {
            cout<<"                        Only " <<Qpizza-Spizza<<" are reamaing in stock";
        }break;

        case 4:
            cout << "                                           Hou many pasta/pastass do you want?" << endl;
            cin>>quant;

        if (Qpasta-Spasta >=quant)
        {
            Spasta=Spasta+quant;
            Total_pasta=Total_pasta+quant*(50);
            cout<<"                    "<<quant<<" pasta/pastas you have ordered"<<endl;
        }

        else
        {
            cout<<"                         Only " <<Qpasta-Spasta<<" are reamaing in stock";
        }break;


        case 5:
            cout << "                           Hou many burger/burgers do you want?" << endl;
            cin>>quant;

        if (Qburger-Sburger >=quant)
        {
            Sburger=Sburger+quant;
            Total_burger=Total_burger+quant*(50);
            cout<<   "                            "<<quant<<" burger/burgers you have ordered"<<endl;
        }

        else
        {
            cout<<"                                   Only " <<Qburger-Sburger<<" are reamaing in stock";
        }break;

        case 6:
            cout << "                    Hou many Milkshake/Milkshakes do you want?" << endl;
            cin>>quant;

        if (Qmilkshake-Smilkshake >=quant)
        {
            Smilkshake=Smilkshake+quant;
            Total_milkshake=Total_milkshake+quant*(100);
            cout<<"                 "<<quant<<" Milkshake/Milkshakes you have ordered"<<endl;
        }

        else
        {
            cout<<"                                      Only " <<Qmilkshake-Smilkshake<<" are reamaing in stock";
        }break;

        case 7:
            cout << "                                              Hou many sandwhich/sandwhichs do you want?" << endl;
            cin>>quant;

        if (Qsandwich-Ssandwich >=quant)
        {
            Ssandwich=Ssandwich+quant;
            Total_sandwich=Total_sandwich+quant*(150);
            cout<<"                     "<<quant<<" sandwichs you have ordered"<<endl;
        }

        else
        {
            cout<<"                                    Only "<<Qsandwich-Ssandwich<<" are reamaing in stock";
        }
        break;


        case 8:
            cout<<"Enter your name"<<endl;

            cin>>name;

            if (name==name2)
            {
            cout<< "Details of sails and collections" <<endl;
            cout<< "Number of rooms we have : "<<Qrooms<<endl;
            cout<< "Number of rooms we gave for : "<<Srooms<<endl;
            cout<< "Remaining rooms : "<<Qrooms-Srooms<<endl;
            cout<< "Total rooms collection of the day : "<<Total_rooms<<endl;

            cout<< "Number of pizza we have : "<<Qpizza<<endl;
            cout<< "Number of pizza we gave for sold : "<<Spizza<<endl;
            cout<< "Remaining pizza : "<<Qpizza-Spizza<<endl;
            cout<< "Total pizza collection of the day : "<<Total_pizza<<endl;
        
            cout<< "Number of pasta we have : "<<Qpasta<<endl;
            cout<< "Number of pasta we gave for sold : "<<Spasta<<endl;
            cout<< "Remaining pasta : "<<Qpasta-Spasta<<endl;
            cout<< "Total pasta collection of the day : "<<Total_pasta<<endl;      

            cout<< "Number of Burger we have : "<<Qburger<<endl;
            cout<< "Number of Burger we gave for sold : "<<Sburger<<endl;
            cout<< "Remaining Burger : "<<Qburger-Sburger<<endl;
            cout<< "Total Burger collection of the day : "<<Total_burger<<endl;            

            cout<< "Number of milkshake we have : "<<Qmilkshake<<endl;
            cout<< "Number of milkshake we gave for sold : "<<Smilkshake<<endl;
            cout<< "Remaining milkshake : "<<Qmilkshake-Smilkshake<<endl;
            cout<< "Total milkshake collection of the day : "<<Total_milkshake<<endl;

            cout<< "Number of sandwich we have : "<<Qsandwich<<endl;
            cout<< "Number of sandwich we gave for sold : "<<Ssandwich<<endl;
            cout<< "Remaining sandwich : "<<Qsandwich-Ssandwich<<endl;
            cout<< "Total sandwich collection of the day : "<<Total_sandwich<<endl;

                int T= Total_rooms+Total_pizza+Total_pasta+Total_burger+Total_milkshake+Total_sandwich;
                cout<<T<<endl;
            }
            else
            {
                cout << "You can't see saled and collections because you are not owner of this hotel" <<endl;
            }

            break;

        case 9:
            exit(0);

            default:
                cout<<"Please select the number mention above"<<endl;    
        case 10:
         cout<<"Ok, you have chech out just now thank you for visiting here";
         exit(0);
        break;
    }

goto h;


return 0;
}
