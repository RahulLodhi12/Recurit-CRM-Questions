#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum += arr[k];
            }
            if(sum==x){
                cout<<i<<" and "<<j<<endl;
                break;
            }
        }
    }
}