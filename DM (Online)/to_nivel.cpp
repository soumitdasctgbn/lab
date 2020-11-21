#include<bits/stdc++.h>
#define mx                          100005
#define lli                         long long int
using namespace std;
vector <lli> v;
int main()
{

    lli time,sp,x,ans=0;
    cout<<"Time:";
    scanf("%lld",&time);
    cout<<"Number of speaker:";
    scanf("%lld",&sp);
    cout<<"Take time for"<< sp<<" speakers one by one\n";
    for(lli i=1;i<=sp;i++)
    {

        scanf("%lld",&x);
        v.push_back(x);

    }
    sort(v.begin(),v.end());

    for(lli i=0;i<sp;i++)
    {
        if(v[i]<=time)
        {
            ans++;
            time-=v[i];
        }
    }
    cout<<"Output: "<<ans;
}







