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

void update(int *a,int *b) {

int x=*a+*b;
int y=abs(*a-*b);
    printf("%d\n%d", x, y);
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);


    return 0;
}
