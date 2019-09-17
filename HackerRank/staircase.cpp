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
    int n,i,j,k;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(k=n;k>i;k--)
        {
            cout<<" ";
        }

        for(j=1;j<=i;j++)
        {
            cout<<"#";
        }
        if(i<n)
        {cout<<endl;
        }
    }
    return 0;
}

