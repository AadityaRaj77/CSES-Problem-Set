#include<iostream>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    ll arr[n]={};
    for (int i=0;i<n;i++){
        arr[i]=i+1;
 }
    if(n<4 && n!=1)
    cout<<"NO SOLUTION";
    else{
       
        for(int k=1;k<n;k=k+2){
            cout<<arr[k]<<" ";
        }
         for(int j=0;j<n;j=j+2){
            cout<<arr[j]<<" ";}
    
}
}
