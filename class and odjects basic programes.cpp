// creating the class and objects
#include<iostream>
using namespace std;
class person
{
	public:
		string name;
		int    age;
		string gender;
};
int main()
{
	person a;
	a.age=20;
	a.gender="male";
	a.name = "achi";
	cout<<"age="<<a.age<<endl;
	cout<<"gender="<<a.gender<<endl;
	cout<<"name="<<a.name<<endl;
	person b;
	a.age=21;
	a.gender="male";
	a.name="srinu";
	cout<<"age="<<a.age<<endl;
	cout<<"gender="<<a.gender<<endl;
	cout<<"name=0"<<a.name<<endl;
}