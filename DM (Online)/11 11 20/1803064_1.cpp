#include <bits/stdc++.h>
#include <chrono>
#define infile                      freopen("in.tvalt", "r", stdin);
#define outfile                     freopen ("out.tvalt","w",stdout);
#define fileclose                   fclose (stdin); fclose (stdout);
using namespace std;

vector<int> vec;
int n,val;
int binarySearch(int left, int right, int val)
{

    if (right >= left)
    {
        int mid = left + (right - left) / 2;
        if (vec[mid] == val)
            return mid;

        if (vec[mid] > val)
            return binarySearch(left, mid - 1, val);

        return binarySearch(mid + 1, right, val);
    }


    return -1;
}

int main()
{

    cin>>n;
    for(int i=0; i<n; i++)
    {

        cin>>val;
        vec.push_back(val);
    }



    cin>>val;
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    int result = binarySearch(0, n - 1, val);
    cout<<"The value is at "<<result<<endl;
    auto end = chrono::high_resolution_clock::now();
    double Time =chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    cout<<"time"<<Time<<endl;
    return 0;
}



