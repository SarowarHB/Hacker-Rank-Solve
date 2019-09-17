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
    int n,i,k,m,l;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>37)
        {


         k=arr[i];
         m=k%10;
         if(m<5)
         {
             l=5-m;
             if(l<3)
             {
                 k=k+l;
                 arr[i]=k;
             }
             else
             {
                 arr[i]=k;
             }
         }
       else
         {
             l=10-m;
             if(l<3)
             {
                 k=k+l;
                 arr[i]=k;
             }
             else
             {
                 arr[i]=k;
             }
         }
        }

    }
     for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;

    }

}
