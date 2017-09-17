
#include<iostream>
using namespace std;

class weather
{
//	static int count;
 	int day;
 	float htemp,ltemp,rain,snow;
 	static float avgh,avgl,avgr,avgs;
 
 public:
 int check(int date);	
 void input_data();
 void display_daily_data(int date);
 void modify(int date);
 void avg(int count);
 void show_all(int i);	
 void delete_(int date);
 
 weather()//this is my constructor
 {  day=99;
 	htemp=100;
 	ltemp=-327;
 	rain=0;
 	snow=0;
 }
};
//these are the static member variables defination :)
float weather :: avgh;
float weather :: avgl;
float weather :: avgr;
float weather :: avgs;

 void weather::input_data()  
 {  
    cout<<"enter htemp";
 	cin>>htemp;
 	cout<<"enter ltemp";
 	cin>>ltemp;
 	cout<<"enter rain";
 	cin>>rain;
 	cout<<"enter snow";
 	cin>>snow;
 	avgh = avgh+htemp;
 	avgl+=ltemp;
 	avgr+=rain;
 	avgs+=snow;
 	
 	
 }

int weather::check(int date)  
 {
 	if(ltemp==-327)
     return 2;
	 else return 1;	
 }

 void weather::display_daily_data(int date)  
 {  
     cout<<"\nHigh_temperature\tLowTemperature\tRain\tSnow\n";  
     cout<<htemp<<"\t\t\t"<<ltemp<<"\t\t"<<rain<<"\t"<<snow;  
 }

 void weather::show_all(int i)  
 {  if(ltemp!=-327)
     cout<<i<<"\t"<<htemp<<"\t\t\t"<<ltemp<<"\t\t"<<rain<<"\t"<<snow<<"\n";  
 }


 void weather::delete_(int date)  
 { 
    if(ltemp==-327)
	{ 
	cout<<"record not found";
	}
	else{
day=0;
 	htemp=0;
 	ltemp=0;
 	rain=0;
 	snow=0;
	}
 }
 
 void weather::modify(int date)  
 {
 	day=date;
    cout<<"enter htemp";
 	cin>>htemp;
 	cout<<"\nenter ltemp";
 	cin>>ltemp;
 	cout<<"\nenter rain";
 	cin>>rain;
 	cout<<"\nenter snow";
 	cin>>snow;
 }

void weather::avg(int count)
{

	avgh=avgh/count;
	avgl=avgl/count;
	avgr=avgr/count;
	avgs=avgs/count;
	 cout<<"\nHigh_temperature\tLowTemperature\tRain\tSnow\n";  
     cout<<avgh<<"\t\t\t"<<avgl<<"\t\t"<<avgr<<"\t"<<avgs; 
}

int main()
{
	weather a[32];
	int date,ch,count=0,c;
	
	do  
       {  
         cout << "\n\t\t\t\t   ***Main Menu***\n";  
         cout << "\t\t\t\tPress 1 : Create Daily Report\n";  
         cout << "\t\t\t\tPress 2 : Display Daily Report\n";  
         cout << "\t\t\t\tPress 3 : Display Monthly Report\n";  
         cout << "\t\t\t\tPress 4 : Delete a record\n";  
         cout << "\t\t\t\tPress 5 : Modify\n";
		 cout << "\t\t\t\tPress 6 : Calculate Average\n";  
         cout << "\t\t\t\tPress 7: Exit\n";  
         cout << "\n\t\t\t\tEnter your choice:\n";  
         cin >> ch;  
         switch(ch)  
	      {  
               case 1:int b;
                    cout<<"enter the number of days for which you want to enter data";
			         cin>>b;
					 for(int i=0;i<b;i++)
					 {cout<<"enter the date";
			          cin>>date;
					   c=a[date].check(date);
					  if(c==2)
					  {
					  	count++;
					    a[date].input_data();
		              }
		              else 
		              cout<<"\nthis data has already inserted by you\n";
		   	
					 }break;
			   case 2:cout<<"enter the date for which you want to display the record";
				       cin>>date;
					   a[date].display_daily_data(date);break;	  
		  		case 3:cout<<"Date\tHigh_temperature\tLowTemperature\tRain\tSnow\n";  
				  for(int i=1;i<=31;i++)
		  				{   
		  					a[i].show_all(i);
						  }
						  break;
			    case 4:cout<<"enter the date\n";
				       cin>>date;
					   a[date].delete_(date);break;
				case 5:cout<<"enter the date for which you want to modify\n";
						cin>>date;
						a[date].modify(date);break;	
				case 6:a[count].avg(count);
					
						break;
				case 7:cout<<"Thank you for using me\n";
				       ch=7;
		  }
	   }while(ch!=7);
                
}
