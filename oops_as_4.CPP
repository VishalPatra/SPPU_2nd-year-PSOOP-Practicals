#include<iostream>
using namespace std;
class shape
{
protected:
float x,y;
public:
virtual void accept()=0;
virtual float area()=0;
};
class triangle:public shape
{
public:
void accept()
{
cout<< "\nEnter base&height:";
cin >> x >>y;
}
float area()
{
return 0.5*x*y;
}
};
class rectangle:public shape
{
public:
void accept()
{
cout<<"\nEnter length&width:";
cin >>x >>y;
}
float area()
{
return x*y;
}
};
int main()
{
shape*S;
triangle T;
rectangle R;
int ch;
do
{
cout<<"\nCalculate\n1.Triangle\n2.Rectangle\n3.Exit\n\nEnteryourchoice:";
cin>>ch;
switch(ch)
{
case1:
S=&T;
S->accept();
cout<<"\nAreaofTriangle:"<<S->area();
break;
case2:
S=&R;
S->accept();
cout<<"\nAreaofRectangle:"<<S->area();
break;
case3:
break;
default:cout<<"\nWrongchoiceentered.";
}
} while(ch!=3);
return 1;
}