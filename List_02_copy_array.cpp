#include<bits/stdc++.h>
#include<list>
using namespace std;

int main()
{

    int arr[5] = {5,4,3,2,1};

    list <int> mylist (arr, arr+5);
    list <int> :: iterator it;

    for(it=mylist.begin(); it!=mylist.end(); it++)
    {
        cout<<*it<<"\t";
    }

    return 0;
}
