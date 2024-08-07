//wap to print reverse of a no
#include<iostream>
using namespace std;
int main(){
    int n;
    int a;
    cin>>n;
    while(n>0){
     a=n%10;
        cout<<a;
       n=n/10;
    }
}