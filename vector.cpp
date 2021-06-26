#include<bits/stdc++.h>
using namespace std;

void print(vector<int> data)
{
    cout<<"Total Element: "<<data.size()<<endl;

    for( int datam:data)
    {
        cout<<datam<<" ";
    }
    cout<<"\n\n";
}

int main()

{
    ///Declare Vector
    vector <int> vec(5, 3);
    print(vec);
    cout<<"\n\n";


    ///Assign one vector value to another
    vector <int> vec2 = vec;
    print(vec2);
    cout<<"\n\n";


    ///Add element in last
    vector <int> vec3 = {1,2,3,4};
    vec3.push_back(5);
    print(vec3);
    cout<<"\n\n";


    ///Add element in begin and end
    vector <int> vec4={2,3,4,5,6};
    vec4.insert(vec4.begin(), 1);
    vec4.insert(vec4.end(),7);
    print(vec4);
    cout<<"\n\n";



    /// READ
    vector <int> data = {3,2,1,4,3,2,1,5,4,3,2,1};
    cout<<data[2]<<endl;
    cout<<data.front()<<endl;
    cout<<data.back()<<endl;
    cout<<"\n\n";


    ///print
    vector <int> data2 = {3,2,1,4,3,2,1,5,4,3,2,1};
    for(int d:data)
    {
        cout<<d<<" ";
    }

    cout<<endl;
    cout<<endl;

    for(int i=0; i<data.size(); i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<"\n\n";



    ///vector to array
    vector <int> vect = {3,2,1,4,3,2,1,5,4,3,2,1};
    int *v = vect.data();

    cout<<v[5]<<endl;

    for(int i=0; i<vect.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n\n";


    ///Update
    vector <int> new_v = {2, 4, 6, 8, 10};
    new_v[4] = 0;
    print(new_v);



    ///Swap

    vector <int> a ={1, 3, 5, 7, 9};
    vector <int> b = {2,4,6,8};

    cout<<"Before Swap:"<<endl;
    print(a);
    print(b);


    a.swap(b);


    cout<<"After Swap:"<<endl;
    print(a);
    print(b);

    cout<<"\n\n";

    ///delete

    vector <int>del = {1,2,3,4, 5, 6};
    del.pop_back(); //last element will removed
    data.clear(); //empty full data


    return 0;
}
