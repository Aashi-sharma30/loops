// wap to count digits of a giuven no
#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cin>>n;
    while(n>0){
        n=n/10;
        count+=1;
    }
        cout<<count;
}