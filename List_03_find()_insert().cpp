#include<bits/stdc++.h>
#include<list>
#include<algorithm>
using namespace std;

int main()
{

    int i,n,s;
    cin>>n; //input length

    list <int> mylist; // input : 1 2 3 4 6
    list <int> :: iterator it;

    for(i=1; i<=n; i++){
        cin>>s;
        mylist.push_back(s);
    }

    it = find (mylist.begin(),mylist.end(),6); //finding 6

    mylist.insert(it,5); // inserting 5 before 6


    for(it=mylist.begin(); it!=mylist.end(); it++) //output 1 2 3 4 5 6
    {
        cout<<*it<<"\t";
    }

    return 0;
}
