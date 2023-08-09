#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int l=0;
    int r=n-1;
    int count=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==k){
            if( (mid-1>=0 && arr[mid-1]==k) || (mid+1<n & arr[mid+1] == k )){
                count++;
            l=mid+1;
            }
            
        }
        else if(k>arr[mid]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    if(count>=1){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}