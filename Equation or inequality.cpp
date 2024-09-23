#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    double i,j,n,m,k,l,e,r,d,D,x1,x2;

    cout<<"a*x*x + b*x + c \na = ";
    cin>>a;
    cout<<a<<"*x*x + b*x + c\n";
    cout<<"b = ";
    cin>>b;
    cout<<a<<"*x*x + "<<b<<"*x + c \n";
    cout<<"c = ";
    cin>>c;
    cout<<a<<"*x*x + "<<b<<"*x + "<<c;
    d= b*b - 4*a*c;
    if(d < 0)
    {
        cout<<endl;
        printf("\nEquation or inequality doesn't have any root because D = %.2f", d);
        cout<<endl;
    }
    else
    {
        cout<<endl;
        D= sqrt(d);
        x1= (-b - D)/(2*a);
        x2= (-b + D)/(2*a);
        printf("\nFirst root : %.2f ", x1);
        printf("\nSecond root : %.2f \n", x2);
    }
}
