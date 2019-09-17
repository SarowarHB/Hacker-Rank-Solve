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

int main()
{
    int i,n,t;
    cin>>n;
   int arr[n];

    for(i=0;i<n;i++)
    {
        int cunt=0;
        cin>>arr[i];
        int l=arr[i];
        while(l>0)
        {

            int k = l%10;
            l=l/10;
            if(k>0)
            {
                   if(arr[i]%k==0)
                  {
                      cunt++;
                  }
            }
        }
        cout<<cunt<<endl;
    }
}
