#include<bits/stdc++.h>
using namespace std;


int main()
{

   stack <int> s;
   int n,i,x;
   cin>>n;

   for(i=0; i<n; i++)
   {
       cin>>x;
       s.push(x);
   }

   cout<<endl;

   while(!s.empty())
   {
       cout<<s.top()<<"\t";
       s.pop();
   }

    return 0;
}
