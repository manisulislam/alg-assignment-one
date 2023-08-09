#include<bits/stdc++.h>
using namespace std;
const int N=1e+7;
int numbers[N];
void merge(int l, int r, int mid){
    int left_size=mid-l+1;
    int L[left_size+1];
    int right_size=r-mid;
    int R[right_size+1];
    for(int i=l, j=0; i<=mid; i++, j++){
        L[j]=numbers[i];
    }
    for(int i=mid+1, j=0; i<=r; i++, j++){
        R[j]=numbers[i];
    }
     L[left_size]=INT_MIN; 
     R[right_size]=INT_MIN;
    int lp=0, rp=0;
    for(int i=l; i<=r; i++){
        if(L[lp]>=R[rp]){
            numbers[i]=L[lp];
            lp++;
        }
        else {
            numbers[i]=R[rp];
            rp++;
        }
    }
   
    
}
void mergeSort(int l, int r){
    if(l==r) return;
    int mid=(l+r)/2;
    mergeSort(l,mid);
    mergeSort(mid+1, r);
    merge(l,r, mid);

}

int main(){
    int n;
    cin>>n;
    int l=0;
    int r=n-1;
    for(int i=0; i<n; i++){
        cin>>numbers[i];
    }
    mergeSort(l,r);
    for(int i=0; i<n; i++){
        cout<<numbers[i]<<" ";
    }
    return 0;
}