#include<bits/stdc++.h>
using namespace std;

int n=7;
double x[100];
double y[100][100];
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
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            y[j][i]=y[j + 1][i - 1] - y[j][i - 1];
        }
    }
}

void Draw_difference_table()
{
    for(int i=0; i<n; i++)
    {
        cout<<x[i]<<"\t";
        for(int j=0; j<n-i; j++)
        {
            cout<<y[i][j]<<"\t";
        }
        cout<<"\n";
    }
}


double differenciation()
{
    double result = 0;
    double h = x[1]-x[0];



    for(int i=1; i<n-1; i++)
    {
        double p = 1/(i*h);
        result = result + ((y[1][i])*p*pow(-1,i+1));

    }
    return result;

}

int main()
{
    ///Step-I : Input
    Input();
    ///Step-II : Forward Difference Table
    Forward_difference_table();
    ///Draw the difference table
    Draw_difference_table();
    double diff_value = differenciation();
    cout<<"Ans is "<<diff_value<<endl;
}


