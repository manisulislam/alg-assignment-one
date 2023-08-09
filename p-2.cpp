#include<bits/stdc++.h>
using namespace std;
int findIndex(int l, int r,int k, int ar[]){
     while(l<=r){
        int mid=(l+r)/2;
        if(ar[mid]==k){
           return mid;
        }
        else if(k>ar[mid]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
        
    }

}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    int k;
    cin>>k;
    int l=0;
    int r=n-1;
    int result=findIndex(l,r,k, ar);
    if(result){
        cout<<result<<endl;
    }
    else {
        cout<<"Not Found"<<endl;
    }
   
   

    return 0;
}