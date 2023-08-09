#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr1[n+1];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[m+1];
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    arr1[n]=INT_MIN;
    arr2[m]=INT_MIN;
    int arr3[n+m];
    int i=0, j=0, k=0;
    
    while(i<n && j<m){
        if(arr1[i]>=arr2[j]){
            arr3[k]=arr1[i];
            i++;

        }
        else{
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    for(int i=0; i<(n+m); i++){
        cout<<arr3[i]<<" ";
    }

    return 0;
}