///Soumit Das; Roll: 1803063
#include<bits/stdc++.h>
using namespace std;
int n=5;
double x[5];
double y[2][5];
string buffer;
void input()
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
void Function()
{
    for(int i=0; i<=5; i++)
    {
        y[i][1]=y[i][0]*y[i][0];
    }
}
void Draw_table()
{
    for(int i=0; i<n; i++)
    {

        cout<<x[i]<<"\t";

        for(int j=0; j<2; j++)
            cout<<y[i][j]<<"\t";

        cout<<endl;

    }
}

int main()
{
    input();
    Function();
    Draw_table();
    double vol=0;
    float h=.25;
    for (int i = 0; i <n; i++)
    {
        if (i == 0 || i == n-1)
            vol += y[i][1];
        else if (i % 2 != 0)
            vol += 4 *y[i][1];
        else
            vol += 2 * y[i][1];
    }
    vol= (vol *3.1416*.25)/3;
    cout<<"Volume = "<<vol<<endl;
}
