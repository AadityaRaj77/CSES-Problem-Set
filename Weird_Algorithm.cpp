#include <iostream>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    cout<<n<<endl;
    while(n>1){
        if(n%2==0){
        n=n/2ll;
        cout<<n<<endl;
        }
        else if(n%2!=0){
        n=3ll*n+1;
        cout<<n<<endl;
        }
    }
}
