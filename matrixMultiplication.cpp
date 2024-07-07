#include<bits/stdc++.h>
using namespace std;


int main(){
    cout<<"For m1"<<endl;
    int m,n;
    cin>>m>>n;

    int m1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>m1[i][j];
        }
    }

    cout<<"For m2"<<endl;
    int o,p;
    cin>>o>>p;

    int m2[o][p];
    for(int i=0;i<o;i++){
        for(int j=0;j<p;j++){
            cin>>m2[i][j];
        }
    }

    // matrixMulti(m1,m,n,m2,o,p);

    int res[m][p];
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            for(int k=0;k<o;k++){
                sum += m1[i][k] * m2[k][j];
            }
            res[i][j] = sum;
            sum=0;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}