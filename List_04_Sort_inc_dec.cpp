#include<bits/stdc++.h>
#include<list>
#include<algorithm>
using namespace std;

int main()
{

    int i,xn,n;
    cin>>n;

    list <float> l;
    list <float> :: iterator it;


    for(i=1; i<=n; i++)
    {
        cin>>xn;
        l.push_back(xn);
    }

    l.sort();                      //inc order
    l.reverse();                  //dec order

    for(it=l.begin(); it!=l.end(); it++)
    {
        cout<<*it<<endl;
    }

    return 0;

}
