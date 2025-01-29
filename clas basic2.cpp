//class to basic operator conversion

#include<iostream>
using namespace std;
class Volume
{
	float radius;
	public:
	void enter()
	{
		cout<<"\n Enter the radius: ";
		cin>>radius;

	}
	operator float()
	{
		float volume;
		volume=radius*radius*radius;
		return volume;
	}

};
int main()
{
	Volume obj;
	obj.enter();
	float volume=obj;
	cout<<"\n Value of basic data type:  "<<volume;
}
