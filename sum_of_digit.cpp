#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
   int a=n%10;
    sum+=a;
    n=n/10;
    }
    cout<<sum;

}