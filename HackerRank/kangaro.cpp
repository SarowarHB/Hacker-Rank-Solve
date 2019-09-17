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
    int x1,v1,x2,v2;

    cin>>x1>>v1>>x2>>v2;

    if(x1<x2&&v1<=v2)
    {
        cout<<"NO";
    }
    else
    {
        while(x1<x2)
        {
            x1=x1+v1;
            x2=x2+v2;
            if(x1==x2)
            {
                cout<<"YES";
            }
            if(x1>x2)
            {
                cout<<"NO";
            }
        }

    }
}
