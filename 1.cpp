#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long a[n];
        for(int i=0; i < n; i++)
        {
            cin>>a[i];
        }
        int b[33];
        for(int i = 0; i < 33; i++)
        {
            b[i] = 0;
        }
        for(int i = 0; i < n; i++)
        {
            long w = a[i];
            int  j = 32;
            while(w>0)
            {
                b[j] = b[j] + w%2;
                w = w/2;
                j--;
            }
        }
        int sum = 0;
        for(int i = 0; i < 33; i++)
        {
            if(b[i]%k==0)
            {
                sum=sum+b[i]/k;
            }
            else
            {
                sum = sum + (b[i]/k) + 1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
