#include <iostream>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    ll y=0;
    cin>>n;
    for(int i=0;i<n-1;i++){
        ll o;
        cin>>o;
        y=y+o;
    }
    ll t= (n*(n+1))/2ll;
    cout<<t-y;
    }
