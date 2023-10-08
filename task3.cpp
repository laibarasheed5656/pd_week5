#include<iostream>
using namespace std;
float TaxCalculator(char type,float price);
main()
{
    char vehicleType;
    cout<<"Enter the vehicle type code(M,E,S,V,T): ";
    cin>>vehicleType;
    float price;
    cout<<"Enter the price of vehicle:$ ";
    cin>> price;
    // float fPrice;
    // cout<<"The final price of a vehicle of type E after adding the tax is:$ ";
    float result = price+TaxCalculator(vehicleType,price);
     cout<<"The final price of a vehicle "<<vehicleType<<" after adding the tax is:$ "<<result;

}
float TaxCalculator(char type,float price)
{
    float TaxAmount;
    char vehicle_type;
    if(vehicle_type=='M')
    {
      TaxAmount=price*0.6; 
    }
    if(vehicle_type=='E')
    {
     TaxAmount=price*0.8;
    }
    if(vehicle_type=='S')
    {
        TaxAmount=price*0.1;
    }
    if(vehicle_type='V')
    { 
        TaxAmount=price*0.12;  
    }
    if(vehicle_type='T')
    {
        TaxAmount=price*0.15;
    }
     return TaxAmount;
}