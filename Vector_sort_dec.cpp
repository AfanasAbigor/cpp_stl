#include<bits/stdc++.h>
#include<algorithm>
#include<vector>

using namespace std;

bool myfun(int a, int b)//dec order
{
    return a>b;
}

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

    sort(vec.begin(),vec.end(),myfun);

    for(i=0; i<x; i++)
    {

        cout<<vec[i]<<"\t";
    }

    return 0;
}
