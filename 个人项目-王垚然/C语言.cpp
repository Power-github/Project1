#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c;
    char r;
    while(cin>>a>>r>>b)
    {
        switch(r)
        {
        case '+':
            c=a+b;
            cout<<c<<endl;
            break;
        case '-':
            c=a-b;
            cout<<c<<endl;
            break;
        case '*':
            c=a*b;
            cout<<c<<endl;
            break;
        case '/':
            c=a/b;
            cout<<c<<endl;
            break;
        default:
            cout<<"����������������룡"<<endl;
        }
    }
}
