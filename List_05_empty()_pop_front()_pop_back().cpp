#include<bits/stdc++.h>
#include<list>
#include<algorithm>
using namespace std;

int main()
{

    int i,n,s;
    cin>>n;

    list <int> li;
    list <int> :: iterator it;

    for(i=1; i<=n; i++)
    {
        cin>>s;
        li.push_back(s);
    }


    cout<<li.front()<<endl;
    cout<<li.back()<<endl;




    if(li.empty())
    {
        cout<<"EMPTY"<<endl;
    }
    else
    {
        cout<<"FILLED"<<endl;
    }


    li.pop_front();
    li.pop_back();

    for(it=li.begin(); it!=li.end(); it++)
    {
        cout<<*it<<"\t";
    }

    return 0;
}
