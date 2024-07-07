#include<bits/stdc++.h>
using namespace std;

void reverse(char *str){
    int s=0;
    int e=strlen(str)-1;
    while(s<e){
        swap(str[s++],str[e--]);
    }
}

void printString(int n){
    char str[50];
    int i=0;
    while(n!=0){
        int rem = n%26;
        if(rem == 0){
            str[i++] = 'Z';
            n = n/26 - 1; 
        }
        else{
            str[i++] = (rem-1) + 'A';
            n = n/26;
        }
    }
    str[i]='\0';
    reverse(str);
    cout<<str;
}

int main(){
    int n;
    cin>>n;
    printString(n);
}