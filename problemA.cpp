#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,counte=0,counto=0;
        cin>>n;
        int sum=0;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            if(arr[j]%2==0)
            {
                counte++;
            }
            else
            {
                counto++;
            }
            sum=sum+arr[j];
        }
        if(sum%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(counte>0 && counto>0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}