#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int n = str.length();

    bool flag = 1;
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1]){
            cout<<"Not Palindrome"<<endl;
            flag=0;
            break;
        }
    }
    if(flag)
        cout<<"Palindrome"<<endl;
}