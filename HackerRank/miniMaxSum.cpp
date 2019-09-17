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
    int arr[5],i,maxsum=0,minsum=0;

    for(i=0;i<5;i++)
    {

         cin >> arr[i];
    }
    sort(arr,arr+5);

    for(i=0;i<5-1;i++)
    {
        minsum=minsum+arr[i];
    }
    for(i=5-1;i>0;i--)
    {
        maxsum=maxsum+arr[i];
    }
    cout<<maxsum<<" "<<minsum;
    return 0;
}
