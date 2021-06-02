#include<bits/stdc++.h>
using namespace std;

int main()
{

    map <string, int> mp;
    map <string, int>::iterator it;

    string a1;
    int a2,n,i;

    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a1>>a2; // a1 key , a2 value
        mp[a1] = a2;
    }

    cout<<endl;

    for(it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }


    return 0;
}
