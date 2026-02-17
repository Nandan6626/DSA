#include <iostream>
#include <vector>
#include <algorithm>   

using namespace std;

int main() {
    int a[]={10,20,30,40,50};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    int i=0,j=n-1,temp ;
    
    while(i<j){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                i++;
                j--;
    }
  
    cout<<"asnjlk"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }

    return 0;
}
