#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int s = 0;
    for(int i = 0;i<n;i++){
        s = 0;
        for(int j = i;j<n;j++){
            s = s+arr[j];
            cout<<s<<" ";
        }
    }
    return 0;
}