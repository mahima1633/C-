//EXCEPTION HANDLING  DIVIDE BY ZERO USING TRY THROW AND CATCH

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter values of a and b";
    cin>>a>>b;
    try{
        if(b==0)
            throw b;
            else 
               cout<<"Result of a/b="<<(a/b);
    }
    catch(int b){
        cout<<"b cannot be zero";
    }
    return 0;
}
