/******************************************************************************

pass by value
pass by reference


*******************************************************************************/
#include <iostream>

using namespace std;

void change_value(int *,int *);
void change_reference(int &x,int &y);
void change_value(int *x,int *y){
    int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
}

void change_reference(int &x,int &y){
    int tmp;
    tmp=x;
    x=y;
    y=tmp;
}

int main()
{
    int a=0,b=1;
    cout<<a<<"and"<<b<<endl;
    change_value(&a,&b);
    cout<<"After pass by value :"<<a<<"and"<<b<<endl;
    change_reference(a,b);
    cout<<"After pass by reference :"<<a<<"and"<<b<<endl;
    return 0;
}
