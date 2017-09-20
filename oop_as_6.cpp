#include<iostream>
using namespace std;
int main()
{
	int q=1;
	while(q==1)
	{
			int x,y,z,q;
			cout<<"\nEnter first Number - Numerator\n";
			cin>>x;
			cout<<"Enter Second Number - Denominator\n";
			cin>>y;
			
		
			try
			{
				if(y!=0)
				cout<<x/y;
				else
				throw y;
			}
			
			catch(int p)
			{
				cout<<"Cannot Divide\n";
			}
			
			cout<<"\nenter 1 to try again else 0 to exit\n";
			cin>>q;
		
	}
		
	
}
