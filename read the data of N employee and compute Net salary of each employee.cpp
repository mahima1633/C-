//Read the data of N employee and compute Net salary of each employee
#include<iostream>
using namespace std;
class employee{
public:
int emp_num;
string emp_name;
int basic_sal;
float DA;
float IT;
float net_sal;
void get_details(){
cout<<"enter employee name"<<endl;
cin>>emp_name;
cout<<"enter employee number"<<endl;
cin>>emp_num;
cout<<"enter basic salary "<<endl;
cin>>basic_sal;
}
void display()
cout<<"employee number "<<emp_num<<endl;
cout<<"employee name "<<emp_name<<endl;
cout<<"basic salary "<<basic_sal<<endl;
cout<<"DA "<<basic_sal*0.52<<endl;
cout<<"IT "<<basic_sal*0.3<<endl;
cout<<"net salary "<<basic_sal+basic_sal*0.52-basic_sal*0.3<<endl;
}
};
int main(){
employee emp;
int i,n;
cout<<"enter the number of employees"<<endl;
cin>>n;
for(i=0;i<n;i++){
emp.get_details();
emp.display();
}
return 0;
}

