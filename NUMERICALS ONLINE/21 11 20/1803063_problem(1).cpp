
#include<bits/stdc++.h>

#define lli                         long long int

using namespace std;

int main()
{

    infile  /// taken input from file
    //outfile
    test_case /// number of test cases
    {
        bool is_lower=false,is_upper=false;
        lli row,col;///number of rows and columns
        cin>>row>>col;
        lli matrix[row+1][col+1];
        frep(i,1,row)///take input
        {
            frep(j,1,col)
            {
                cin>>matrix[i][j];
            }
        }
        frep(i,1,row)///print the matrix
        {
            frep(j,1,col)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(row!=col)
        {
            cout<<"Invalid Input\n\n";
            continue;
        }
        lli visitor1=0,visitor2=0,zero_count1=0,zero_count2=0;
        frep(i,1,row)
        {
            frep(j,1,col)
            {
                if( j<i)///Check if the matrix upper triangular
                {
                    visitor1++;
                    if(matrix[i][j]==0)
                    {
                        zero_count1++;
                    }
                    is_upper = (visitor1==zero_count1);

                }
                if( j>i )///Check if the matrix lower triangular
                {
                    visitor2++;
                    if(matrix[i][j]==0)
                    {
                        zero_count2++;
                    }
                    is_lower = (visitor2==zero_count2);
                }
            }
        }
        if(is_upper && is_lower)
            cout<<"The matrix is diagonal matrix\n\n";
        else if(is_lower)
            cout<<"The matrix is lower triangular matrix\n\n";
        else if(is_upper)
            cout<<"The matrix is upper triangular matrix\n\n";
        else
            cout<<"The matrix is neither upper nor lower triangular matrix\n\n";
    }
    fileclose
}
///sample input is given below
///1st line contains number of test cases
///every 1st line of test case contains row,col (number of row and column)
///next row number of rows and col number of columns contains the matrix

/*
4
3 3
1 0 0
2 1 0
1 2 3

3 2
1 0
2 4
5 6

3 3
1 2 3
0 5 6
0 0 7

4 4
1 2 3 4
5 6 7 8
9 10 14 15
8 9 14 0
*/





