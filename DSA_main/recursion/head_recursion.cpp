// head recursion - it means  function does not need to perform any operation  at time of calling ,it have to  do anything at the time of returning.
#include<iostream>
using namespace std;
void function(int n){
    if(n>0){
        function(n-1);
        // printing at returning time--1234
        cout<<n<<" ";
    }
}
void fun(int n){
    cout<<endl;
    int i=1;
    while(n>=i){
        cout<<i<<" ";
        i++;
    }

}
int main(){
    function(4);
    fun(4);
    return 0;
}