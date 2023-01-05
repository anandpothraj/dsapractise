#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1){return n;}
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans*=i;
    }
    return ans;
}

int main(){
    cout<<factorial(14);
}