#include <iostream>
#include <fstream>
using namespace std;
struct customer
{
 int id;
 string name;
 int phone_num;
 int payment;
 string date;
};
void input(customer c[])
{   
    fstream file;
 int i=0;
 while( i < 2 )
 {
        file.open("customers.txt", ios::app);
 cout<<"***TV CABLE'S CUSTOMERS BILL DETAIL** "<<endl;
 cout<<"=============================================  "<<endl;
 file<<"***TV CABLE'S CUSTOMERS BILL DETAIL** "<<endl;
 file<<"============================================== "<<endl;
 cout<<"Enter Customer's ID: "<<endl;
 cin >> c[i].id;
     cout<<"Enter Customer's Name: "<<endl;
     cin>>c[i].name;
     cout<<"Enter Customer's Phone Number: "<<endl;
     cin>>c[i].phone_num;
     cout<<"Enter the amount to be paid: "<<endl;
     cin>>c[i].payment;
     cout<<"Enter Date : "<<endl;
     cin>>c[i].date;
     cout<<endl;
        cout<<"***TELEVISION CABLE BILL PAYEMENT** "<<endl;
     cout<<"=============================================  "<<endl;
     file<<"***TELEVISION CABLE BILL PAYEMENT** "<<endl;
     file<<"=============================================  "<<endl;
     cout<<"Customer's ID is "<<c[i].id<<endl;
     file<<"Customer ID: "<<c[i].id<<endl;
        cout<<"Customer's Name is "<<c[i].name<<endl;
        file<<"Customer Name: "<<c[i].name<<endl;
        cout<<"Customer's Phone Number is "<<c[i].phone_num<<endl;
        file<<"Customer Phone Number: "<<c[i].phone_num<<endl;
        cout<<"Customer's have to pay the amount: "<<c[i].payment<<endl;
        file<<"Customer's Amount to be paid: "<<c[i].payment<<endl;
        cout<<"Bill Due Date is "<<c[i].date<<endl;
        file<<"Due Date: "<<c[i].date<<endl;
      cout<<"================================================"<<endl;
     cout<<endl;
 i++;
    }
 for( int p = 0; p < 2; p++)
    {
    cout<<"Enter Customer ID :";
    cin>>c[p].id;
    cout<<"Enter the name of the customer :";
    cin>>c[p].name;
    cout<<"Enter the amount that has to be paid : ";
    cin>>c[p].payment;
    if (c[p].payment == 200 )
    {
 cout<<"the amount is paid"<<endl;
}
    else if ( c[p].payment > 200)
    {
 cout<<"the amount is not paid "<<endl;
 cout<<"Now total amount has to be paid "<<c[p].payment + 200;
 cout<<endl;
    }
}
}
main()
{
 fstream file;
 customer obj[20];
 input(obj);
}
// detials has not been entered in the program 
