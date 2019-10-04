#include <iostream>
#include <string.h>
using namespace std;
class base1
{
public:
int id;
char name[30], dob[30], bloodgrp[5];
};
class base2
{
public:
float height,weight;
};
class base3
{
public:
char policy_num[20];
char address[50];
};
class derived:public base1,public base2,public base3
{
public:
char tele_no[20],drivinglic_no[20];
void accept();
void display();
int search(char key[]);
int modify(int tempx);
void del_entry();
};
void derived::accept()
{
cout<<"\nEnter the id";
cin >> id;
cout << "\n Enter the name";
cin>> name;
cout<<"\n Enter the dob";
cin>>dob;
cout<<"\n Enter the bloodgroup";
cin>>bloodgrp;
cout<<"\nEnter the height&Weight";
cin >>height >>weight;
cout<<"\n Enter the policy number";
cin>>policy_num;
cout<<"\n Enter the contact address";
cin>>address;
cout<<"\nEnter the telephone number";
cin>> tele_no;
cout<< "\nEnter the driving licence number";
cin>> drivinglic_no;
}
void derived::display()
{
cout<<"ID="<<id<<endl;
cout<<"Name="<<name<<endl;
cout<<"DateofBirth="<<dob<<endl;
cout<<"Bloodgroup="<<bloodgrp<<endl;
cout<<"Height="<<height<<endl;
cout<<"Weight="<<weight<<endl;
cout<<"InsurancePolicyNumber="<<policy_num<<endl;
cout<<"ContactAddress="<<address<<endl;
cout<<"TelephoneNumber="<<tele_no<<endl;
cout<<"DrivingLicenceNumber="<<drivinglic_no<<endl;
}
int derived::modify(int tempx)
{
if(tempx==id)
{
cout<<""<<endl;
cout<<"This is the old data of this ID="<<endl;
display();
cout<<"\nID is not going to  change because its unique for your entry"<<endl;
cout<<"\nEnter new name";
cin>>name;
cout<<"\nEnter the new dob";
cin>>dob;
cout<<"\nEnter the new blood group";
cin>>bloodgrp;
cout<<"\nEnter the new height&Weight";
cin>>height>>weight;
cout<<"\nEnter the new policy number";
cin>>policy_num;
cout<<"\nEnter the new contact address";
cin>>address;
cout<<"\nEnter the new telephone number";
cin>>tele_no;
cout<<"\nEnter the new drivinglicencenumber";
cin>>drivinglic_no;
cout<<"\nUpdatedSuccessfully"<<endl;
return 1;
}
return 0;
}
int derived::search(char key[])
{
if(strcmp(key,name)==0)
{
cout<<"RecordFound"<<endl;
display();
return 1;
}
return 0;
}
void derived::del_entry()
{
strcpy(name,"null");
strcpy(dob,"null");
strcpy(bloodgrp,"null");
strcpy(policy_num,"null");
strcpy(address,"null");
strcpy(tele_no,"null");
strcpy(drivinglic_no,"null");
height=weight=0;
cout<<""<<endl;
cout<<"Record field values are deleted Except the ID,You can again reuse that record using modify";
}
int main()
{
derived d[100];
int ch=0,i,n=0,flag=0,tempx=0,id=0;
char key[30];
do
{
cout<<"\n1.InsertData"<<endl;
cout<<"\n2.DisplayData"<<endl;
cout<<"\n3.ModifyData"<<endl;
cout<<"\n4.SearchData"<<endl;
cout<<"\n5.DeleteData"<<endl;
cout<<"\n6.Exit"<<endl;
cout<<"\nEnteryourchoice";
cin>>ch;
switch(ch)
{
case1:
cout<<"\nEnter the no of entries to be inserted";
cin>>n;
for(i=0;i<n;i++)
{
d[i].accept();
}
break;
case2:
for(i=0;i<n;i++)
{
d[i].display();
}
break;
case3:
cout<<"\nEnter the id of particular entry to be modify the data:";
cin>>tempx;
for(i=0;i<n;i++)
{
flag=d[i].modify(tempx);
if(flag==1)
break;
}
cout<<""<<endl;
if(flag==0)
cout<<"\nRecord not found";
flag=0;
break;
case4:
cout<<"\nEnter the name of record you want to search:";
cin>>key;
for(i=0;i<n;i++)
{
flag=d[i].search(key);
if(flag==1)
break;
}
cout<<""<<endl;
if(flag==0)
cout<<"\nRecord not found"<<endl;
flag=0;
break;
case5:
cout<<"\n Enter the id of record you want to delete:";
cin>>id;
for(i=0; i<n; i++)
{
if(d[i].id==id)
{
d[i].del_entry();
}
}
cout<<""<<endl;
break;
case6:
cout<<"\nEnd of Program";
break;
}
}while(ch!=6);
return 0;
}