
#include<bits/stdc++.h> 
using namespace std;

class base1
{	protected:
	string name,dob,b_gp ;
	public:
	base1(string nam,string birth,string blood)
	{
		name=nam;
		dob=birth;
		b_gp=blood;
	}
};

class base2
{
	protected:
	int h,w;
	public:
	base2(int height,int weight)
	{
		h=height;
		w=weight;
	}
};

class base3
{
	protected:
	int ins_no;
	string adrs;
	public:
	base3(int insur,string add)
	{
		ins_no=insur;
		adrs=add;
	}
};

class son:public base1 ,public base2,public base3
{
	int telp ,dr_no,s_no,count=1;
	public:
	
	son(int sno,int tele,int deri,string nam,string birth,string blood,int height,int weight,int insur,string add):base1(nam,birth,blood),base2(height,weight),base3(insur,add)
	{
	s_no=sno;	
	telp=tele;
	dr_no=deri;	
	}	
	
	
	void display()
	{
		cout<<endl<<s_no<<"\t"<<name<<"\t"<<dob<<"\t"<<b_gp<<"\t\t"<<h<<"\t"<<w<<"\t\t"<<ins_no<<"\t"<<adrs<<"\t\t"<<telp<<"\t\t"<<dr_no<<"\n";
 		count++;
	}
	
	 int driving()
	 {
	 return dr_no;
	 }
	 

	 
};

 



int main()
{	int dr_n,n=0,ch,count=0,c,flag,j=0;
	int tele,deri,height,weight,insur;
	string nam,birth,blood ,add;
	son *a[31];//this will initialise pointer of type class(son)
	 
	
	do  
       {  j=0;
         cout << "\n\t\t\t\t   ***Main Menu***\n";  
         cout << "\t\t\t\tPress 1 : Insert new entry\n";  
         cout << "\t\t\t\tPress 2 : Display Master Table\n";  
         cout << "\t\t\t\tPress 3 : Delete a record\n";  
         cout << "\t\t\t\tPress 4 : Modify\n";
		 cout << "\t\t\t\tPress 5 : Search Report By Driving License No.\n";  
         cout << "\t\t\t\tPress 6 : Exit\n";  
         cout << "\n\t\t\t\tEnter your choice:\n";  
         cin >> ch;  
         switch(ch)  
	      {           	
	           case 1:  cout<<"enter name";       cout<<endl;   cin>>nam;     cout<<endl;
						cout<<"Enter Dob";        cout<<endl;   cin>>birth;   cout<<endl;
						cout<<"Enter blood group";cout<<endl;   cin>>blood;   cout<<endl;
						cout<<"Enter Height";     cout<<endl;   cin>>height;  cout<<endl;
						cout<<"Enter Weight";     cout<<endl;   cin>>weight;  cout<<endl;
						cout<<"Enter insuranc_No";cout<<endl;   cin>>insur;   cout<<endl;
						cout<<"Enter address";    cout<<endl;   cin>>add;     cout<<endl;
						cout<<"Enter Telephone";  cout<<endl;   cin>>tele;    cout<<endl;
						cout<<"Enter Lincese no.";cout<<endl;   cin>>deri;    cout<<endl;
						
						a[n]=new son(n+1,tele,deri,nam,birth,blood,height,weight,insur,add);  
              			n++;  break;
			    
			case 2:     cout<<"S_no\tName\tDOB\tBlood Group\tHeight\tWeight\tinsurance_no.\taddress\ttelephone\tdrivnig_licence";  
					   	while(j<n)
						{
	                		if(a[j])
							a[j]->display();
	                		j++;
              			}
              			break;
						  	  
		  	case 3: 	cout<<"write serial number to delete\n";
               			cin>>j;
			   			j--;
                		if(j>n||a[j]==nullptr)
						{
							cout<<"data not present\n";
							break;
						}
                		else
                		{
                			delete a[j];
							a[j]=nullptr;
							break;
						//	n--;
							
						// a[0]->shift(a,i,x);	
						
						}
						
						
						
					
						
						
						
						
						
       		case 4:    cout<<"write serial no. to modify\n";
               		   cin>>j;
					   j--;
                       if(j>n-1||a[j]==nullptr)
					   {
					   		cout<<"data not present\n";
							break;
					   }
               			else
					   {

                       delete a[j];
                       
                	    cout<<"enter name";       cout<<endl;   cin>>nam;     cout<<endl;
						cout<<"Enter Dob";        cout<<endl;   cin>>birth;   cout<<endl;
						cout<<"Enter blood group";cout<<endl;   cin>>blood;   cout<<endl;
						cout<<"Enter Height";     cout<<endl;   cin>>height;  cout<<endl;
						cout<<"Enter Weight";     cout<<endl;   cin>>weight;  cout<<endl;
						cout<<"Enter insuranc_No";cout<<endl;   cin>>insur;   cout<<endl;
						cout<<"Enter address";    cout<<endl;   cin>>add;     cout<<endl;
						cout<<"Enter Telephone";  cout<<endl;   cin>>tele;    cout<<endl;
						cout<<"Enter Lincese no.";cout<<endl;   cin>>deri;    cout<<endl;
						
                	    a[j]=new son(j+1,tele,deri,nam,birth,blood,height,weight,insur,add); 
              			
						}
              			break;
       		case 5: 	cout<<"write driving lic no to search\n";
               			cin>>dr_n;
						flag=1;
                		for(int j=0;j<n+1;j++)
						{	
								//cout<<a[j]->driving()<<" ";
		                    	if(a[j]!=0 && a[j]->driving()==dr_n)
								{
		               			cout<<"\nname "<<" \tdob "<<"\tbloodgroup "<<"\theight "<<"\tweight "<<"\tinsurance no  "<<"\tcontact no  "<<"\tdvg lic no\n";
		                        a[j]->display();
		                       	flag=0;  break;
		                    	}
                        }
               			if(flag!=0)
			   			cout<<"\nthis driving license is not present\n";

               			break;	
			case 6:     cout<<"\nThank you for using me\n";ch=7;break;
		  }
	   }while(ch!=7);
}
