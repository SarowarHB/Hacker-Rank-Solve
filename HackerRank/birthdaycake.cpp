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
    int n;
    cin>>n;

    int arr[n],i,cunt=0;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int maxx=arr[n-1];

   for(i=0;i<n;i++)
    {
        if(maxx==arr[i])
        {
            cunt++;
        }
    }
    cout<<cunt;

}
