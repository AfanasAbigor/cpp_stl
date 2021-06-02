#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <pair<int, string> > vec;
    vector <pair<int, string> >::iterator it;

    string val;
    int key, i, n;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>key>>val;
        vec.push_back(make_pair(key, val));
    }

    cout<<endl;

    for(i=0; i<n; i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }

    cout<<endl;

    //Using Iterator

    for(it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }


    return 0;
}
