#include<bits/stdc++.h>
using namespace std;

void minRange(int arr[],int n,int k){
    int start=0,end=n;
    for(int i=0;i<n;i++){
        unordered_set<int> set;
        int j;
        for(j=i;j<n;j++){
            set.insert(arr[j]);
            if(set.size()==k){
                if(j-i<end-start){
                    start=i;
                    end=j;
                }
            }
            if(j==n){
                break;
            }
        }
    }
    if(start == 0 && end==n){
        cout<<"Invalid k";
    }
    else{
        cout<<start<<" "<<end;
    }
}

int main(){
    int arr[]={4,2,2,2,3,4,4,3};
    int n = sizeof(arr)/sizeof(int);
    int k = 3;
    minRange(arr,n,k);
    return 0;
}