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
    int n,d,i,j,m;
    cin>>n;

   int arr[n];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cin>>d>>m;
   int cunt=0;
   for(i=0;i<n;i++)
   {
       int sum=0;
       for(j=i;j<m+i;j++)
       {
           sum=sum+arr[j];
       }
       if(sum==d)
       {
           cunt++;
       }
   }
   cout<<cunt;

}
