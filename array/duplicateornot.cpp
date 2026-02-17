#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> a(5);
  int n=a.size();
  cout<<"enter:";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  bool flag=true;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(a[i]==a[j]){
        cout<<"Duplicate element is: "<<a[i]<<endl;
        flag=false;
      }

    }
  }
  if(flag==true){
    cout<<"it not contain the dublicate elements:";
  }
  else{
    cout<<"it contain the dublicate elements:";
  }
}