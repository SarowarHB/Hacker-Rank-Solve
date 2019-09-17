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
    string s;
    cin>>s;

    int i,cunt=0;
    if(isalpha(s[0])==2)
           {
               cunt++;

           }

    for(i=0;i<s.size();i++)
    {

           if(isupper(s[i]))
            {
                cunt++;
            }
    }
    cout<<cunt;
}
