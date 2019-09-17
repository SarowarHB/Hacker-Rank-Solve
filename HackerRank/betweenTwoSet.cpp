#include<bits/stdc++.h>
/*
    Sarowar Hossain Bhuyain
    City University,Pnathapath,Dhaka,Bangladesh;

    Hacker Rank-Sarowar Hossain
    Uva-sarowar75856
    URI-SAROWAR_BHUYAIN
    Toph-sarowar_hsb

*/
using namespace std;

   int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int findlcm(int arr[], int n)
{

    long long int ans = arr[0];

    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));

    return ans;
}

int main()
{
    int m,n,i,j;
    long long int x;

    cin>>m>>n;
    int cunt;
     int a[m],b[n];

    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    x=findlcm(a,m);
    cout<<x;

    int lcunt=0;
   for(i=x;i<=b[0];i++)
    {
        if(i%x==0)
        {
            cunt=0;
            for(j=0;j<n;j++)
            {
                if(b[j]%i==0)
                {
                    cunt++;
                }
            }

            if(cunt==n)
            {
              lcunt++;
            }
         }
    }
cout<<lcunt;
return 0;
}
