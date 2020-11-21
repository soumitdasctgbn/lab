///Author: Soumit Das
///Roll: 1803063
/// example 7.3
#include<bits/stdc++.h>
#define mx                          100005
#define lli                         long long int
#define ulli                        unsigned long long int
#define mset(a,b)                   memset(a, b, sizeof(a))
#define infile                      freopen("1803063.txt", "r", stdin);
#define outfile                     freopen ("out.txt","w",stdout);
#define fileclose                   fclose (stdin); fclose (stdout);
#define test_case                   lli T; cin>>T;for(lli t=1;t<=T;t++)
#define scani(x)                    scanf("%d",&x);
#define printi(x)                   printf("%d\n",x);
#define scanli(x)                   scanf("%lld",&x);
#define printli(x)                  printf("%lld\n",x);
#define frep(i,from,to)             for(lli i=from;i<=to;i++)
#define frev(i,from,to)             for(lli i=from;i>=to;i--)
using namespace std;

int main()
{
    ///input file format///
    ///1st line contains number of row and number of column
    ///then the matrix is given

    ///input for example 7.3

    /*
    3 3
    1 2 3
    4 5 6
    7 8 9
    */

    infile ///taking input from file


    lli row,col; ///number of row and column
    scanf("%lld %lld",&row,&col);

    lli matrix[100][100];

    ///Taking input
    ///frep(it,from,to) is actually a for loop;
    frep(i,1,row)
    {
        frep(j,1,col)
        {
            scanf("%lld",&matrix[i][j]);
        }
    }

    frep(i,1,row)///print the matrix
    {
        frep(j,1,col)
        {
            printf("%lld ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    double temp=0,column_norm=0, row_norm=0,euclidean_norm=0;
    ///calculating the column norm
    frep(i,1,col)
    {
        temp=0;
        frep(j,1,row)
        {

            temp+=matrix[j][i];
        }
        column_norm=max(column_norm,temp);
    }

    ///calculating the row norm
    frep(i,1,row)
    {
        temp=0;
        frep(j,1,col)
        {
            temp+=matrix[i][j];
        }
        row_norm=max(row_norm,temp);
    }

    ///calculating the euclidean norm
    frep(i,1,row)
    {
        frep(j,1,col)
        {
            euclidean_norm+=matrix[i][j]*matrix[i][j];
        }
    }
    euclidean_norm=sqrt(euclidean_norm);

    ///print outputs///
    printf("Column norm  %lf\n",column_norm);
    printf("Euclidean norm  %lf\n",euclidean_norm);
    printf("Row norm  %lf\n",row_norm);

    fileclose
}





