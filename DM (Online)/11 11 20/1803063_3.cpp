
#include <bits/stdc++.h>
#include <chrono>
#define infile                      freopen("in.txt", "r", stdin);
#define outfile                     freopen ("out.txt","w",stdout);
#define fileclose                   fclose (stdin); fclose (stdout);
using namespace std;

vector<int> arr;
int n;
double time_taken;
void insertionSort()
{
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    auto end = chrono::high_resolution_clock::now();
    time_taken =chrono::duration_cast<chrono::microseconds>(end - start).count();
    time_taken *= 1e-9;
}

int main()
{

    ///number of elements///
    cin>>n;

    int x;

    ///elements are being taken ///
    for(int i=0; i<n; i++)
    {

        cin>>x;
        arr.push_back(x);
    }

    insertionSort();

//    printf("print the sorted array: ");
//    for(int i=0; i<n; i++)
//        printf("%d  ",arr[i]);
    printf("\nTime %.9lf\n",time_taken);

    return 0;
}



