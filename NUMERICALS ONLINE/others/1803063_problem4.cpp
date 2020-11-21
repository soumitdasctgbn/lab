///Soumit Das; Roll:1803063
#include<bits/stdc++.h>
using namespace std;
int j=10,n=10;
double x[10],y[10];
double Function(double x)
{
    return ((double)1.00)/((double)(1.00+x));
}
void Input(double h)
{
    int i=0;
    double temp=0;
    for(i=0; i<10; i++)
    {

        x[i]=temp;
        temp+=h;
        cout<< x[i]<<"\t";
        y[i]=Function(x[i]);
        cout<<y[i]<<endl;
        if(x[i]>=1) break;
    }
}
double trapezodial(double h)
{
    double result=0;
    for(int i=0; i<=j; i++)
    {
        if (i == 0 || i == j)
        {
            result =result +y[i];
        }
        else result=result+(2*y[i]);
    }
    return (result*h)/2;

}
double simpsons(double h)
{
    double result=0;
    for (int i = 0; i <=n; i++)
    {
        if (i == 0 || i == n)
            result =result+ y[i];
        else if (i % 2 != 0)
            result =result+( 4 *y[i]);
        else
            result =result+( 2 * y[i]);
    }
    return (result *h)/3;

}
int main()
{
    double h=1;
    for(int i=1; i<=3; i++)
    {
        h/=2;
        Input(h);
        cout<<"\n\nResult:\n";
        cout<<"h\t | Trapezodial\t | Simpson's \n";
        cout<<h<<"\t | "<<trapezodial(h)<<"\t | "<<simpsons(h)<<"\n\n";
    }
}

