#include<iostream>
using namespace std;
    
class Base
{
public:
    void show() { cout<<" Hello \n"; }
};
    
class Derived: public Base
{
public:
    void show() { cout<<" Welcome \n"; }
};
    
int main(void)
{
    Base*bp = new Derived;

    bp->show();  
  
    return 0;
    
}
