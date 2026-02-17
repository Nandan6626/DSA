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
int size=a.size();
for(int i=0;i<size;i++){
  for(int j=i+1;j<size;j++){
    if(a[i]+a[j]==0){
      cout<<"hurrey"<<a[i]<<a[j]<<endl;
    }
  }


}
return 0;
}
