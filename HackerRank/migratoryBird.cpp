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
    int n,i,j,k,cunt=1;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if((arr[i]==arr[j])
           {
               cunt++;
           }
       }

    }
    cout<<cunt;

}
