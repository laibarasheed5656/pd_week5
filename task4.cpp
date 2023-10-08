#include<iostream>
using namespace std;
float projectTimeCalculation(int days, int hours, int workers, int n_hours );
main()
{
    int n_hours;
    cout<<"Enter the needed hours: ";
    cin>>n_hours;
    int days;
    cout<<"Enter the days that firm has: ";
    cin>>days;
    int workers;
    cout<<"Enter the number of all workers: ";
    cin>>workers;
    projectTimeCalculation(days,hours,workers,n_hours);
}
float projectTimeCalculation(int days,int hours,int workers, int n_hours)
{
    int tDays;
    tDays=days*0.1;
    int workingDays=days-tDays;
    n_hours= workingDays*hours;
    int t= workingDays-n_hours;
    if(t>0)
    {
        cout<<"yes! "<<n_hours<<" hours left.";
    }
    if(t<0)
    {
        cout<<"Not enough time! "<<tDays<<" hours needed";
    }
    return t;
    



}