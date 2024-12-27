#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
typedef long long int ll;
//Kadane's Algorithm
int main() {
    ll n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++){
        ll u;
        cin>>u;
        v.push_back(u);
    }
ll cur_sum=0;
ll max_sum=INT_MIN;
for(int j=0;j<n;j++){
    cur_sum=v[j]+cur_sum;
    max_sum=max(max_sum,cur_sum);
    if(cur_sum<0)
    cur_sum=0;
}
cout<<max_sum;
}
