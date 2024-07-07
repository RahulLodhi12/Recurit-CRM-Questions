#include<bits/stdc++.h>
using namespace std;

// ASCII Table contain total of 256 character

int main(){
    string s1,s2;
    cin>>s1>>s2;

    int cnt1[256]={0};
    int cnt2[256]={0};

    for(int i=0;i<s1.length();i++){
        cnt1[s1[i]]++;
    }

    for(int i=0;i<s2.length();i++){
        cnt2[s2[i]]++;
    }

    bool flag = 1;
    for(int i=0;i<256;i++){
        if(cnt1[i]!=cnt2[i]){
            flag=0;
            cout<<"Not Anagram"<<endl;
            break;
        }
    }
    if(flag){
        cout<<"Anagram"<<endl;
    }

}