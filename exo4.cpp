#include<iostream>
#include <cmath>//include the mathematical library
const double pi=3.142;
double carrier_signal(double t, double fc)
{return cos(2*pi*fc*t);}
double message_signal(double t,double fm)
{return sin(2*pi*fm*t);}
double freq_mod_signal(double t,double fc,double fm)2
{ return carrier_signal(t,fc)*message_signal(t,fm);}
int main()
{   double t,fc,fm;
    std::cout<<"Enter the value of t:";
    std::cin>>t;
    std::cout<<"Enter the value of carrier frequrncy (fc):";
    std::cin>>fc;
    std::cout<<"Enter the value of message frequrncy (fm):";
    std::cin>>fm;
    double mod_signal=freq_mod_signal(t,fc,fm);
    std::cout<<"The resulted signal is: "<<mod_signal<<std::endl;
    return 0;
}    