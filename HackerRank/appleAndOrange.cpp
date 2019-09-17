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
   long int s,t,a,b,m,n,i;

    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int cunt=0;
   long int man[m],org[n];

    for(i=0;i<m;i++)
    {
        cin>>man[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>org[i];
    }
    for(i=0;i<m;i++)
    {
        long int x=a+man[i];

        if(x>=s&&x<=t)
        {
            cunt++;
        }
    }
    cout<<cunt<<endl;
    int kcunt=0;
     for(i=0;i<n;i++)
    {
      long int y=b+org[i];
        if(y>=s&&y<=t)
        {
            kcunt++;
        }
    }
    cout<<kcunt<<endl;

}
