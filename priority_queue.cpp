#include<bits/stdc++.h>
using namespace std;
int main()

{
    priority_queue <int> p;
    int i,n,x;
    cin>>n;


    for(i=0; i<n; i++)
    {
        cin>>x;
        p.push(x);
    }


    while(!p.empty())
    {
        cout<<p.top()<<endl;
        p.pop();
    }



    return 0;
}
