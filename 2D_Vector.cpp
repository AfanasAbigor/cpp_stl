#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    ///Creating 2-D vector
    vector< vector<int> > vec;

    for(i=0; i<3; i++)
    {
        vector <int> temp;

        for(j=0; j<3; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }

        vec.push_back(temp);
    }

    ///Printing 2-D vector

    for(i=0; i<vec.size(); i++)
    {
        for(j=0; j<vec[i].size(); j++)
        {
            cout<<vec[i][j]<<" ";
        }

        cout<<endl;
    }


    return 0;
}
