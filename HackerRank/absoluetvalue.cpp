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
    int n;
    cin>>n;
    int arr[n][n],x,i,j;
    int sumlr=0,sumrl=0;


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          cin >>arr[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         if(i==j)
         {
             sumlr=sumlr+arr[i][j];
         }

        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==n-1-i)
         {
             sumrl=sumrl+arr[i][j];
         }
    }
    }
    x=sumlr-sumrl;
int y=abs(x);
    cout<<y;

}


