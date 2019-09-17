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
string a;
cin>>a;
for (int i=0;i<a.size();i++)
{
    if (a[i]!=',')
        cout<<a[i];
    else
        cout<<"\n";
}

}
