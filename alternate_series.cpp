//wap to print the sum of series:1-2+3-4+5-6....
#include<iostream>
using namespace std;
int main(){
    //identified the pattern of the series and work
    int n;
    //int i;
    int sum=0;
    cout<<"enter a num";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum+=i;
        }
        else{
            sum-=i;
        }
    cout<<sum;
    }

}
