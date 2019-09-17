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
  long long int i,n,r,sum=0,h=0,f[10000],cunt=0,z,m[10000],j,l[10000],s;
  printf("Enter The Value of n\n");
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            f[h]=i;
            h++;
        }
    }
    for(i=0;i<h;i++)
    {
       l[i]=f[i];
       sum=0;
        while(l[i]!=0)
        {
            r=l[i]%10;
            l[i]=l[i]/10;
            sum=sum+r;
        }
         m[i]=sum;

    }
    z=m[0];
    for(i=0;i<h;i++)
    {
        if(m[i]>z){
            z=m[i];s=i;}
    }
    for(i=0;i<h;i++)
    {
        if(z==m[i])
           {
               l[cunt]=i;
        cunt++;
        }
    }
    if(cunt>1)
        printf("%lld",f[l[0]]);
    else printf("%lld",f[s]);
    return 0;
}
