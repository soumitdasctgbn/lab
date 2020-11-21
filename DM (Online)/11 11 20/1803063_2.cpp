#include <bits/stdc++.h>
#include <chrono>
#define infile                      freopen("in.txt", "r", stdin);
#define outfile                     freopen ("out.txt","w",stdout);
#define fileclose                   fclose (stdin); fclose (stdout);
using namespace std;

vector<int> arr;
int n;
double time_taken;
int cnt=0;
void bubbleSort()
{
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);


    int i, j;
    for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    auto end = chrono::high_resolution_clock::now();
    time_taken =chrono::duration_cast<chrono::microseconds>(end - start).count();
    time_taken *= 1e-9;

}

int main()
{

    ///number of elements///
    cin>>n;

    ///elements are taken here///
    int x;
    for(int i=0; i<n; i++)
    {

        cin>>x;
        arr.push_back(x);
    }

    bubbleSort();

    printf("print the sorted array: ");
    for(int i=0;i<n;i++)
        printf("%d  ",arr[i]);
    printf("\nTime %.9lf\n",time_taken);

    return 0;
}



