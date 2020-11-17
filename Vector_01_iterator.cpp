#include<bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;
int main(){

    int i,x;
    cin>>x;
    vector <int> vec;
    vector <int> :: iterator it;

    for(i=1; i<=x; i++){
      vec.push_back(i);
    }


    for(i=0; i<x; i++){
        cout<<vec[i]<<"\t";
    }

    printf("\n");

    for(it=vec.begin(); it!=vec.end(); it++){
        cout<<*it<<"\t";
    }




return 0;
}
