//github-BabaBharatSharma
//hackerrank-bharat007shrama7 
//#include<iostream>
using namespace std;
#include<bits/stdc++.h> 

class complex1
{
	int x,y;
	public:
		complex1()  //khali constructor
		{	
			x=0;
			y=0;
		}
		
		complex1(int a , int b)
		{
			x=a;
			y=b;
		}
		
		friend complex1 operator + (complex1 &c1,complex1 &c2);   // friend fuction
		friend complex1 operator - (complex1 &c1 ,complex1 &c2);  // friend function
		
				complex1 operator - ()   //member function negative banana 
			{	
			//	complex1 c;
				x=-x;
				y=-y;
			//	return c;
			}
		
			void display_data()
			{
				cout<< x <<"  (+)  "<<y<<"i"<<endl ;
			}

				complex1 operator * (complex1 c2)   // member fuction mutiplication karna
			{	
				complex1 c;
				c.x=c2.x*x - c2.y*y;
				c.y=c2.x*y + x*c2.y;
				return c;
			}
			
			
				complex1 operator / (complex1 c2)   //member function division karna
			{	
				complex1 c;
				c.x=x/c2.x;
				c.y=y/c2.y;
				return c;
			}
			
				bool operator > (complex1 c2)   //member function greater than
			{	
				//complex1 c;
				if(x>c2.x &&y>c2.x)
				return 1;
				else 
				return 0;
				
			}

			friend ostream & operator << (ostream &output, complex1 &temp); // friend fuction of << insertion operator	
	    	friend istream & operator >> (istream &input, complex1 &temp); // friend fuction of >> insertion operator	
			

};



	complex1 operator + (complex1 &c1,complex1 &c2)  // defination of friend function  add wala
			{	
				complex1 c;
				c.x=c2.x +c1.x;
				c.y=c2.y +c1.y;
				return c;
			}
		
		
	complex1 operator - (complex1 &c1,complex1 &c2)  // defination of friend function  subtract wala
			{	
				complex1 c;
				c.x=c1.x-c2.x;
				c.y=c2.y-c2.y;
				return c;
			}
	ostream & operator << (ostream &output, complex1 &temp)    // defination of friend function  << wala
{	
    output<<temp.x<<"  (+)  "<<temp.y<<"i "<<endl;
    return output;
}

	istream & operator >> (istream &input, complex1 &temp)    // defination of friend function  >> wala
{	
    input>>temp.x>>temp.y;
    return input;
}		
			
	
int main()
{	int a,b,p,q;
 	cout<<"\t\t\tEnter Real part and Imaginary part of FIRST complex1 no \n";
    cin>>a>>b;
	complex1 c1(a,b),c2,c3;
	cout<<c1;
    cout<<"\t\t\tEnter Real part and Imaginary Part of SECOND complex1 no \n";
    cin>>c2;
    cout<<c2;


//		cin>>c2;
		
	int ch,f_m,s_a;
	    //cout<<c3;
	
	do
	{
		cout<<"\t\t\tPress 1 : Unary Overloading : Negative of complex1 number\n\t\t\tPress 2 : Binary Overloading\n\t\t\tPress 3 : Relational Overloading(check the greater complex1 number)\n\t\t\tPress 4 : To Exit\n";
	cin>>ch;
		switch(ch)
		{
		 case 1:-c1;
		 		-c2;
		 		cout<<"the negative of first complex1 no is : "<<endl<<endl;
		 	//	c1.display_data();
		 		cout<<c1;
			 	cout<<"the negative of second complex1 no is : "<<endl<<endl;
		 	//	c2.display_data();
		 		cout<<c2;
			 	break;
		 case 2:cout<<"\n\t\t\tenter 1 To use(add/sub) friend function\t\t enter 2 To use(mutiply/divide) member function\n";
		 	    cin>>f_m;
		 	    if(f_m==1)
		 	    {
		 	    	cout<<"\n\t\t\tEnter 1 to ADD         and        Enter 2 to Subtract\n"; 
		 	    	cin>>s_a;
				 	if(s_a==1)
		 	    		{
		 	    			c3=c1+c2;         // iska matlab c1.operator(c2)
		 	    		//c3.display_data();
						cout<<c3;
						}		
						else if(s_a==2)
					    {
					    	c3=c1-c2;
					    //c3.display_data();
						cout<<c3;
						}
				    else
					    cout<<"\n\t\t\tenter correct choice\n";		 
				}
				if(f_m==2)
				{
						cout<<"\n\t\t\tEnter 1 to Multiply        and        Enter 2 to divide\n"; 
			 	    	cin>>s_a;
					 	if(s_a==1)
			 	    		{
			 	    			c3=c1*c2;
			 	    		//c3.display_data();
							cout<<c3;
							}		
							else if(s_a==2)
						    {
						    	c3=c1/c2;
						    	cout<<c3; break;   //---------------------------------- <<   -------------------
								//c3.display_data();break;
						    	 
							}
					    else
						    cout<<"\\t\t\tnenter correct choice\n";
				}
				break;
			case 3 :if(c1>c2)
					cout<<"-----    complex1 no. 1 > complex1 no. 2   ---"<<endl;
					else
					cout<<"-----    complex1 no. 2 > complex1 no. 1   ---"<<endl;
					break;
				
		}		
	}while(ch!=4);
}



	/*1) gayaani bharat.
1.cout is an object of ostream class and cin is an object istream class
2) These operators must be overloaded as a global function. And if we want to allow them to access private data members of class, we must make them friend.
			*/
