#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a(5);

    for(int i=0;i<5;i++){
        cin>>a[i];
    }

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Size: "<<a.size()<<endl;
    cout<<"Capacity: "<<a.capacity()<<endl;

    a.push_back(100);

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Size: "<<a.size()<<endl;
    cout<<"Capacity: "<<a.capacity()<<endl;

    a.pop_back();

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Size: "<<a.size()<<endl;
    cout<<"Capacity: "<<a.capacity()<<endl;

    return 0;
}
