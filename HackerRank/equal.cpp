#include <bits/stdc++.h>
/*
    Sarowar Hossain Bhuyain
    City University,Pnathapath,Dhaka,Bangladesh;

    Hacker Rank-Sarowar Hossain
    Uva-sarowar75856
    URI-SAROWAR_BHUYAIN
    Toph-sarowar_hsb

*/
using namespace std;

int main()
{
   long long int t,n,i;

    cin>>t;

    while (t--)
    {
        cin>>n;
       long long int arr[n];
        long long int mini=100000;

        for (i=0;i<n;i++)
        {
            cin>>arr[i];
            mini=min(arr[i],mini);
        }

       sort(arr,arr+n);

    long long int  sum = 1000000000000;

    for(int j = 0; j < 3; j++) {
          long long int cs = 0;
           for(int i = 0; i < n; i++) {
            long long int k = arr[i] - arr[0] + j;
            cs = cs + (k / 5 + k % 5 / 2 + k % 5 % 2 / 1);
        }
        sum = min(cs,sum);
    }

        cout<<sum<<endl;
    }

    return 0;
}
