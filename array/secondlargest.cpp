#include<iostream>
using namespace std;
int main()
{
  int a[]={2,3,4,6,67,8,8,9,3,393};
  int n=10;
  int max=a[0];
  int second=a[0];
  for(int i=0;i<n;i++){
    if(a[i]>max){
      second=max;
      max=a[i]; 
    }
    if(a[i]>second && a[i]<max){
      second=a[i];
    }
  }
  cout<<max<<endl;
  cout<<second;
  return 0;
}