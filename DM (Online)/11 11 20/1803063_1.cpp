#include <bits/stdc++.h>
#include <chrono>
#define infile                      freopen("in.txt", "r", stdin);
#define outfile                     freopen ("out.txt","w",stdout);
#define fileclose                   fclose (stdin); fclose (stdout);
using namespace std;

vector<int> arr;
int n;
double time_taken;
int binarySearch(int left, int right, int x)
{
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);


    if (right >= left)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(left, mid - 1, x);

        return binarySearch(mid + 1, right, x);
    }

    auto end = chrono::high_resolution_clock::now();
    time_taken =chrono::duration_cast<chrono::microseconds>(end - start).count();
    time_taken *= 1e-9;
    return -1;
}

int main()
{



    ///number of elemnts///

    cin>>n;

    int x;
    ///elements are taken here
    /// I have assumed that sorted values will be given
    for(int i=0; i<n; i++)
    {

        cin>>x;
        arr.push_back(x);
    }



        cin>>x;
        int result = binarySearch(0, n - 1, x);
        (result == -1) ? cout << x<<" is not present in array\n"
                              : cout << "Element is present at index " << result<<"\n";

        printf("Time taken %.9lf\n second",time_taken);

    return 0;
}


