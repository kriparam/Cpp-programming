#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	int a,b,Add,Sub,Mul,choice;
	float Div;

	cout<<"1.Enter one for Addition\n";
	cout<<"2.Enter one for substraction\n";
	cout<<"3.Enter one for multification\n";
	cout<<"4.Enter one for division\n";
	cout<<"Enter your choice\n";
	cin>>choice;
	switch(choice)
	{
	case 1:
			cout<<"Enter two values for Addition operation\n";
        	cin>>a>>b;
         	Add=a+b;
	        cout<<Add;
	        break;
	case 2:
		    cout<<"Enter two values forsubstraction operation\n";
        	cin>>a>>b;
        	Sub=a-b;
			cout<<Sub;
			 break;
	case 3:
			cout<<"Enter two values for mul operation\n";
        	cin>>a>>b;
         	Mul=a*b;
	        cout<<Mul;
	         break;
	case 4:
		    cout<<"Enter two values fordivision operation\n";
        	cin>>a>>b;
        	Div=a/b;
	      	cout<<Div;
	      	 break;
	    default:
	    cout<<"your choice is incorrect\n";
	    
	
	}
	getch();
	}

