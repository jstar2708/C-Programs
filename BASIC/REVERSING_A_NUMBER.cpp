#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int N;
    int rev = 0;
    while(n>0){
        N = n%10;
        n = n/10;
        rev = rev*10 + N;
    } cout<<rev;
    return 0;
}