#include <iostream>

using namespace std;

int main()
{
     string Name,identity;
    double printer = 550;
    double phone = 400;
    double table = 50;
    double vat = 0.12;
    double Payment;
    double item1,item2,item3,change,balance, cost, totalAmount;
    cout<<endl;


    cout<<"Name of customer"<<endl;
    getline(cin, Name);
    cout<<"Enter your ID"<<endl;
    cin>>identity;
    cout<<endl;
    cout<<" ITEMS FOR SALE"<<endl;
    cout<<"Printer = 550"<<endl;

    cout<<"Phone = 400"<<endl;

    cout<<"Table = 50"<<endl;




    cout<<"How many printers will you like to purchase,if none input 0"<<endl;
    cin>> item1;
    cout<<"How many phone will you like to purchase,if none input 0"<<endl;
    cin>> item2;
    cout<<"How many table will you like to purchase,if none input 0"<<endl;
    cin>> item3;
    cout<<endl;



    cost= ((printer*item1)+(phone*item2)+(table*item3));
    totalAmount=((vat*cost)+ cost);
    cout<<"Number of items you purchased cost = $";
    cout<< cost<<endl;
    cout<< "total cost = $";
    cout<< totalAmount<<endl;
    cout<<"How much do you want to pay"<<endl;
    cin>>Payment;
    cout<<endl;



    if (Payment==totalAmount)
    {
        cout<<"Thanks for your Payment."<<endl;
    }
        else if(Payment>totalAmount)
    {
        cout<<"Thanks for your payment."<<endl;
        cout<<"Your change will appear on your receipt"<<endl;

    }
    else
        {
            cout<<"Thanks for your payment."<<endl;
            cout<<"Your balance will appear on your receipt"<<endl;
        }

        cout<<endl;







    balance =(totalAmount-Payment);
    change = (Payment - totalAmount);
    cout<< "Nasks Supermarket"<<endl;
    cout<< "Name :";
    cout<< Name <<endl;
    cout<< "ID :";
    cout<< identity <<endl;
    cout<< "printer =";
    cout<< item1 <<endl;
    cout<< "phone =";
    cout<< item2 <<endl;
    cout<< "table =";
    cout<< item3 <<endl;
    cout<< "vat =";
    cout<< vat;
    cout<< "%" <<endl;
    cout<<"Amount =$";
    cout<<cost<<endl;
    cout<<"totalAmount(vat) =$";
    cout<<totalAmount<<endl;
    cout<<"Payment =";
    cout<<Payment<<endl;
    cout<<endl;





    if (Payment ==totalAmount)
    {
        cout<<"Thanks for shopping with us."<<endl;
    }
    else if(Payment>totalAmount)
    {
        cout<<"Your change = $";
        cout<< change <<endl;
    }
    else
    {
        cout<<"Your balance = -$";
        cout<< balance <<endl;
    }

    return 0;
}

