#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int j;
    for(int i = 1;i<=n;i++){
        for(j = 1;j<=n-i;j++){
            cout<<" ";
        } for(;j<=n;j++){
            cout<<i<<" ";
        } cout<<endl;
    } return 0;
}