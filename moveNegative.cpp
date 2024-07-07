#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};

    int i=-1;
    for(int p=0;p<9;p++){
        if(arr[p]<0){
            i = p;
            break;
        }
    }

    int j=i+1;
    while(i<9 && j<9){
        if(arr[i]<0 && arr[j]>0){
            swap(arr[i],arr[j]);
            i++;
        }
        j++;
    }

    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

}