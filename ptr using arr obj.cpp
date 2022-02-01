//
#include<iostream>
using namespace std;
class item
{
	int places;
	public:
		void get()
		{
			cout<<"enter places";
			cin>>places;
		}
		void show()
		{
			cout<<"places are"<<places<<"\n";
		
		}
};
int main()
{
	item x;
	item*ptr = new item[3];
	x.get();
	x.show();
	cout<<"Array of pointer objects"<<endl;
	for(int i=0;i<3;i++)
	{
		ptr->get();
		ptr->show();
	}
	return 0;
}
