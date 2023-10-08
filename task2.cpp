#include<iostream>
using namespace std;
float pyramidVolume(int l,int w, int h,string unit);
main() 
{
    float l,w,h;
    string unit;
    cout<<"Enter the length of variable(in meters): ";
    cin>>l;
    cout<<"Enter the width of variable(in meters): ";
    cin>>w;
    cout<<"Enter the height of variable(in meters): ";
    cin>>h;
    cout<<"Enter the desired output unit(millimeters,centimeters,meters,killometers): ";
    cin>>unit;
    float result=pyramidVolume(l,w,h,unit);

}
float pyramidVolume(int l,int w,int h, string unit)
{
    float area=l*w;
    float volume=(area*h)/3;
    return volume;
}