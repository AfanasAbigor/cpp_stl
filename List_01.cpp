#include<bits/stdc++.h>
#include<list>

using namespace std;

void mylist(list <int> lis)
{

    list <int> :: iterator it;

    for(it=lis.begin(); it!=lis.end(); it++)
    {
        cout<<*it<<"\t";
    }

}

int main()
{

    int i,n,s;
    cin>>n;

    list <int> l;

    for(i=1; i<=n; i++)
    {
        cin>>s;
        l.push_back(s);
    }
    printf("\n");

    mylist(l);

    return 0;
}
