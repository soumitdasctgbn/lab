#include <bits/stdc++.h>
#define lli                         long long int
#define outfile                     freopen ("in.txt","w",stdout);
#define fileclose                   fclose (stdin); fclose (stdout);
using namespace std;
int main(void)
{


    outfile

        srand(time(0));
        lli n=rand();
        cout<<n<<"\n\n";
        vector<lli> v;
        srand(time(0));
        for(int i = 0; i<n; i++)
            v.push_back(rand());
        sort(v.begin(),v.end());
        for(int i = 0; i<n; i++)
            cout<<v[i]<<"\n";
    return 0;
}
