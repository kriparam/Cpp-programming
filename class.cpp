#include<iostream>
#include<conio.h>
using namespace std;
class employee{
	public:
		int id;
		string name;
		float salary;
		void insert(int i,string n,float s)
		{
			id=i;
			name=n;
			salary=s;
		}
		void display()
		{
			cout<<id<<" "<<name<<" "<<salary<<endl;
		}
};
int main()
{
	employee e1,e2;
	e1.insert(201,"aaa",5000);
	e2.insert(202,"bbb",6000);
	e1.display();
	e2.display();
	return 0;
}
