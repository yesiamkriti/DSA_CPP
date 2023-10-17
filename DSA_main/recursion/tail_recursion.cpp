// if a function calling itself then last call statement in the function is called tail recursion.
#include<iostream>
using namespace std;
int function(int n){
    if(n>0){
        cout<<n<<" ";
        return function(n-1);
    }
    return 0;
}
int fun(int n){
    while(n>0){
        cout<<n<<" ";
        n--;
    }
    return 0;
}
int main(){
    int r=function(4);
    cout<<r<<endl;
    cout<<fun(4)<<endl;
    return 0;
}