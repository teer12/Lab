#include <iostream>
#include"hipotenuse.h"
#include <math.h>
using namespace std;

void hipotenuse::Init(double F, double S)
{
first=F; second=S;
}

void hipotenuse::Read()
{
cout<<"\n first?";
cin>>first;
cout<<"\n second?";
cin>>second;
}

void hipotenuse::Show()
{
cout<<"\n first="<<first;
cout<<"\n second="<<second;
cout<<"\n";
}

double hipotenuse::Hipotenuse()
{
return sqrt(pow(first,2)+pow(second,2));
}