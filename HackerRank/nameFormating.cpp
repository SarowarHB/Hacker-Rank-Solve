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
   scanf("%d ",&n);
   string s[100];
   string k;
   int i;
   for(i=1;i<=n;i++)
  {
      getline(cin,s[i]);
      k=s[i];
      int m=0;
      while(k[m]!='\0')
      {
          k[m]=toupper(k[m]);
          m++;
      }

     cout<<"Case"<<" "<<i<<": "<<k<<endl;
   }

   return 0;
}
