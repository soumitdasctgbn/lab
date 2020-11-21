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

void Forward_difference_table()
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            y[j][i] = y[j+1][i-1] - y[j][i-1];
        }
    }
}

void Draw_difference_table()
{
    for(int i=0;i<n;i++){

        cout<<x[i]<<"\t";

        for(int j=0;j<n-i;j++)
        cout<<y[i][j]<<"\t";

        cout<<endl;

    }
}

int fac[100];
int factorial(int n)
{
    if(fac[n]!=-1)
        return fac[n];
    if(n==1)
        return fac[1]=1;
    else
        return fac[n]=n*factorial(n-1);

}

double p_val(int n, double p)
{
    double p_original = p;

    for(int i=1; i<n;i++)
        p_original = p_original*(p-i);

    return p_original;

}

double Interpolation(double val)
{
    double result = y[0][0];
    double h = x[1]-x[0];
    double p = (val-x[0])/h;


    for(int i=1;i<n;i++)
    {
        result = result + ( p_val(i,p)*y[0][i] )/factorial(i);
    }

    return result;
}


int main()
{

   memset(fac,-1,sizeof(fac));
   Input();
   Forward_difference_table();
   Draw_difference_table();

   double val;

   while(true)
   {
       cout<<"Enter an interpolating value: "<<endl;
       cin>>val;

       if(val==0)
           break;

       double missing_value = Interpolation(val);
       cout<<"Missing value for "<<val<<" is "<<missing_value<<endl;

   }


}
