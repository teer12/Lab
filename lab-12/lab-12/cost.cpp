#include <iostream>
#include"cost.h"
#include <math.h>
using namespace std;

void cost::Init(int F, double S)
{
first=F; second=S;
}

void cost::Read()
{
cout<<"\n first?";
cin>>first;
cout<<"\n second?";
cin>>second;
}

void cost::Show()
{
cout<<"\n first="<<first;
cout<<"\n second="<<second;
cout<<"\n";
}

double cost::Cost()
{
return first*second;
}