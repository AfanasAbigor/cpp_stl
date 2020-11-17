#include<bits/stdc++.h>
#include<vector>

using namespace std;


int main()
{

    int i,x,s;
    cin>>x;
    vector <int> vec;

    for(i=1; i<=x; i++)
    {
        cin>>s;
        vec.push_back(s);
    }


    for(i=0; i<x; i++)
    {

        cout<<vec[i]<<"\t";
    }

    return 0;
}
