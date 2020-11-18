#include<bits/stdc++.h>
using namespace std;
//SORTING ARRAY DEC

bool srt(int a, int b)
{

    return a>b;

}


int main()
{

    int x[100],i,n;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>x[i];
    }

    sort(x,x+n,srt);

    for(i=0; i<n; i++)
    {
        cout<<x[i]<<"\t";
    }


    return 0;
}
