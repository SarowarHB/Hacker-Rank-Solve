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

int main() {
    int h,m,s;
    char c[3];
    scanf("%d:%d:%d%s",&h,&m,&s,c);
    if(!strcmp(c,"PM") && h != 12)
    {
        h+=12;
    }
    if(!strcmp(c,"AM") && h == 12)
    {
        h = 0;
    }
    printf("%02d:%02d:%02d\n",h,m,s);
    return 0;
}
