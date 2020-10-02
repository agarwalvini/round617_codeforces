#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n,rem,ans;
        cin>>n;
        rem=n;
        ans=n;
        while(n>=10)
        {
            int d=n/10;
            n=n-9*d;
            ans=ans+d;
        }
        cout<<ans<<endl;
    }
    return 0;
}