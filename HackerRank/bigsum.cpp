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
    int n,i;
    long long int sum;
    sum=0;
    cin>> n;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cin >>arr[i];
        sum=sum+arr[i];
    }

    cout<<sum;

}

