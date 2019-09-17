#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3],b[3],aln=0,bob=0,i,j;

    for(i=0;i<3;i++)
    {
        cin >>a[i];
    }
    for(j=0;j<3;j++)
    {
        cin >>b[j];
    }
  for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            aln++;
        }
        else if(a[i]<b[i])
        {
            bob++;
        }
        else
        {
            bob=bob;
            aln=aln;
        }
    }
    cout<<aln<<" "<<bob;

}

