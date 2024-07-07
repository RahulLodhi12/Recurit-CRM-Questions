#include<bits/stdc++.h>
using namespace std;

void permutate(string& st, int l, int r){
    if(l==r){
        cout<<st<<endl;
    }
    for(int i=l;i<=r;i++){
        swap(st[i],st[l]);
        permutate(st,l+1,r);
        swap(st[i],st[l]);
    }
}

int main(){
    string str;
    cin>>str;

    int n = str.length();

    permutate(str,0,n-1);
}