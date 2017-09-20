#include<iostream>
using namespace std;

template<class B>
class matrix
{	
	
	public :
	B arr1[10][10] , arr2[10][10];
	void enter(int,int,int,int);
	void add(int,int,int,int,matrix&);
	void sub(int,int,int,int,matrix&);
	void mul(int,int,int,int,matrix&);
};

template <class B>
void matrix<B> ::enter (int r1,int c1,int r2,int c2)
{
	
	cout<<"\nEnter First Matrix\n";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cin>>arr1[i][j];
		}
	}

	cout<<"\nEnter Second Matrix\n";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cin>>arr2[i][j];
		}
	}
	
}

template <class B>
void matrix<B> ::mul(int r1,int c1,int r2,int c2,matrix <B> &a)
{
	B arr3[c1][r2];
	
		cout<<"\nmultiplication is\n";	
		for(int i = 0 ; i < r1 ; i++)
		{
			for(int j = 0 ; j < r1 ; j++)
			{
				arr3[i][j] = 0;
				for(int k = 0 ; k < r1 ; k ++)
				{
					arr3[i][j] = arr3[i][j] + (a.arr1[i][k]*a.arr2[k][j]);
				}
			}
		}
		
		for(int i = 0 ; i < r1 ; i++)
		{
			for(int j = 0 ; j < c1 ; j++)
			{
				cout<<arr3[i][j]<<" ";
					
			}cout<<"\n";
		}
	
}



template <class B>
void matrix<B> ::sub(int r1,int c1,int r2,int c2,matrix <B> &a)
{
	
	cout<<"\nSubtraction Is i.e Matrix 1 - Matrix 2 \n";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cout<<a.arr1[i][j]-a.arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

template <class B>
void matrix<B> ::add(int r1,int c1,int r2,int c2,matrix <B> &a)
{
	cout<<"\nAddition Is\n";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cout<<a.arr1[i][j]+a.arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	
}


int main()
{
	int row1,co1,row2,co2,choice=0,inner=0;
	cout<<"\nEnter The Number Of Row And Column Of First Matrix";
	cin>>row1>>co1;
	cout<<"\nEnter The Number Of Row And Column Of Second Matrix";
	cin>>row2>>co2;
	

	while(choice!=3)
	{
		cout<<"\n\t\t\t\tEnter 1 For Interger Matrix Of Size "<<row1<<" , "<<co1<<" and "<<row2<<" , "<<co2<<"\n\t\t\t\tEnter 2 For   Float  Matrix Of Size "<<row1<<" , "<<co1<<" and "<<row2<<" , "<<co2<<endl;
		cout<<"\t\t\t\tEnter 3 To Exit\n";
		cin>>choice;
		
		switch(choice)
		{
			
					
			case 1:	matrix <int> o_;
				    o_.enter(row1,co1,row2,co2);
					 while(inner!=4)
					{
					
				
					cout<<"\n\t\t\t\tEnter 1 For Addition\n";		
					cout<<"\t\t\t\tEnter 2 For Subtraction\n";
					cout<<"\t\t\t\tEnter 3 For Multiplicatoin\n";
					cout<<"\t\t\t\tEnter 4 To Exit\n";
					cin>>inner;
						
						switch(inner)
						{
							
						case 1:	if(row1==row2 && co1==co2)
								{
									matrix <int> o_1;
									o_1.add(row1,co1,row2,co2,o_);
									break;
								}
								else
								{
									cout<<"\nAddition is not possible\n";
									break;
								}
									
							
						case 2:	if(row1==row2 && co1==co2)
								{
									matrix <int> o_2;
									o_2.sub(row1,co1,row2,co2,o_);
									break;
								}
								else
								{
									cout<<"\nSubutraction is not possible\n";
									break;
								}	
									
						
						case 3:if(co1==row2)
								{
									matrix<int> o_3;
									o_3.mul(row1,co1,row2,co2,o_);	
									break;
								}
								else
								{
									cout<<"\nMultiplication is Not Possible\n";
									break;
								}
						break;	
						case 4:cout<<"Thank you!!"	;													
				//		}
						}
					
				}
				inner=0;
					break;//while end
				
			case 2:	matrix <float> oi_;
				    oi_.enter(row1,co1,row2,co2);
					 while(inner!=4)
					{
					
				
					cout<<"\n\t\t\t\tEnter 1 For Addition\n";		
					cout<<"\t\t\t\tEnter 2 For Subtraction\n";
					cout<<"\t\t\t\tEnter 3 For Multiplicatoin\n";
					cout<<"\t\t\t\tEnter 4 To Exit\n";
					cin>>inner;
						
						switch(inner)
						{
							
						case 1:	if(row1==row2 && co1==co2)
								{
									matrix <float> oi_1;
									oi_1.add(row1,co1,row2,co2,oi_);
									break;
								}
								else
								{
									cout<<"\nAddition is not possible\n";
									break;
								}
									
							
						case 2:	if(row1==row2 && co1==co2)
								{
									matrix <float> oi_2;
									oi_2.sub(row1,co1,row2,co2,oi_);
									break;
								}
								else
								{
									cout<<"\nSubutraction is not possible\n";
									break;
								}	
									
						
						case 3:if(co1==row2)
								{
									matrix<float> oi_3;
									oi_3.mul(row1,co1,row2,co2,oi_);	
									break;
								}							
									else
								{
									cout<<"\nMultiplication is Not Possible\n";
									break;
								}
						break;	
						case 4:cout<<"Thank you!!"	;													
				//		}
						}
					
				}
				inner=0;
					break;//while end
				
					
			
			
							

			
		}//switch outer
		
	}//while outer
	
	
	
}//main
