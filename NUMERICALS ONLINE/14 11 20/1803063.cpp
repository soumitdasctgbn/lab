#include<bits/stdc++.h>
using namespace std;
int n = 5;
double x[5];// {0.00, 0.25, 0.50, 0.75, 1.00};
double y[5];//{1.00, 0.9896, 0.9589, 0.9089, 0.8415};
const double pi = 3.14159265358979323846;

string buffer;
vector<string>tmp;

void Input()
{
    int i=0;
    ifstream f1;
    f1.open("in.txt");
    while(! f1.eof())
    {
        f1>>x[i]>>y[i];
        i++;
    }

}

int p_val(int x)
{
    if( x == 0 || x==n-1)
    {

        return 1;
    }
    else if(x%2 != 0)
    {
        return 4;
    }
    else
    {
        return 2;
    }
}

int main()
{
    Input();
    double h = x[1] - x[0];
    double res = 0,sum = 0;
    for(int j = 0; j<n; j++)
    {
        sum+=(p_val(j)*y[j]*y[j]);
    }
    res = pi*h*sum / 3;
    printf("Ans: %.4lf",res);
    return 0;
}
