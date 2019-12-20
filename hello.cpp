#include<iostream>
#include<conio.h>
using namespace std;
class student{
	public:
		int id;
		string name;
		void insert(int i,string n)
		{
			id=i;
			name=n;
		}
		void disply()
		{
			cout<<id<<name<<endl;
		}
};
int main()
{
	student s1,s2;
	s1.insert(202,"kpsingh");
	s2.insert(205,"rajkumar");
	s1.disply();
	s2.disply();
	return 0;
}
