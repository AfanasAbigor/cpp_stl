#include<bits/stdc++.h>
using namespace std;

int main()
{

    set <int> s;
    set<int>::iterator it;

    int i,n,x;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>x;
        s.insert(x);
    }

    for(it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<"\t";
    }


    return 0;
}
