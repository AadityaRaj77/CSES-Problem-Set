#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int ll;
 
int main() {
    ll n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll b=0;
    for(int j=0;j<n-1;j++){
          if(v[j]!=v[j+1])
          b=b+1;
    }
    cout<<b+1;
}
