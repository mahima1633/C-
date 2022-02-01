//late binding
#include<iostream>
using namespace std;
class base
{
	public:
		virtual void show()
		{
			cout<<" Hello\n"<<endl;
		}
		};
		class derived:public base
		{
			public:
				void show()
				{
					cout<<" Welcome\n"<<endl;
				}
		};
		 
int main(void)
{
    base*bp = new derived;

    bp->show();  
  
    return 0;
    
}
		
