#include <iostream>
using namespace std;
class demo
{
double x,y;
public:
void accept()
{
cout <<"\n Enter two numbers:";
cin >> x>> y;
}
double divide()
{
try
{
if (y==0)
throw(y);
cout<<"\n Division is:"<<x/y;
}
catch(double p)
{
cout<<"\n Divide by zero exception:\n";
}
}
};
int main()
{
demo o;
o.accept();
o.divide();
return 0;
}
