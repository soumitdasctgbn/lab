///Soumit Das; Roll:1803063
#include<bits/stdc++.h>
using namespace std;

int n=4;
double x[4];
double y[4][4];
string buffer;
vector<string>tmp;

void Input()
{
    int i=0;
    ifstream f1;
    f1.open("in.txt");
    while(! f1.eof())
    {
        f1>>x[i]>>y[i][0];
        i++;
    }

}

void backward_difference_table()
{
    for(int i=1; i<n; i++)
    {
        for(int j=n-1; j>=i; j--)
        {
            y[j][i] = y[j][i-1] - y[j-1][i-1];
        }
    }
}
void Draw_difference_table()
{
    for(int i=0; i<n; i++)
    {
        cout<<x[i]<<"\t";

        for(int j=0; j<=i; j++)
            cout<<y[i][j]<<"\t";

        cout<<endl;

    }
}
double p_value(int n, double p)
{
    double x = p;
    for(int i=1; i<n; i++)
        x = x*(p+i);
    return x;
}
int fac[100];
int factorial(int n)
{
    if(fac[n]!=-1)
        return fac[n];
    if(n==1)
        return fac[n]=1;
    else
        return fac[n]=n*factorial(n-1);
}
double interpolation(double value)
{
    double result = y[3][0];
    double h = x[1]-x[0];
    double p = (value-x[3])/h;
    for(int i=1; i<n; i++)
    {
        result = result + ( p_value(i,p)*y[n-1][i] )/factorial(i);
    }
    return result;
}
int main()
{
    memset(fac,-1,sizeof(fac));
    Input();
    backward_difference_table();
    Draw_difference_table();
    double value;
    while(true)
    {
        cout<<"Enter a value of x to interpolate: ( Put 0 to terminate )"<<endl;
        cin>>value;
        if(value==0)
            break;
        double answer = interpolation(value);
        cout<<" y( "<<value<<" ) = "<<answer<<endl;

    }
}
