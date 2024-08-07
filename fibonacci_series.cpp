#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter a num";
    cin>>n;
    int a=1,b=1,sum=0;
    for(i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }    
    cout<<sum;
    }
//loop (n-2) times chlega bcoz hum a=1,b=1,sum=2 
//2 lies at 3rd position at fib series ,hum 2 terms extra chl rhe hai thats why loop -2 tk chlega..!!
