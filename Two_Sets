#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++){
        v.push_back(i+1);
    }
    ll s=(n*(n+1))/2;
    ll o=0;
    ll f=0;
    vector<ll>d;
    vector<ll>t;
    if(s%2==1)
        cout<<"NO";
    else{
        for(ll y=n;y>0;y=y-1){
            o=o+y;
            f=f+1;
            d.push_back(y);
            if(o>s/2){
                o=o-y;
                f=f-1;
                d.pop_back();
                t.push_back(y);
                continue;
            }
            if(o==s/2){
                cout<<"YES"<<endl;
                continue;
            }
        }
    
    cout<<f<<endl;
    for(int u=d.size()-1;u>-1;u--){
        cout<<d[u]<<" ";
    }
    cout<<endl<<n-f<<endl;
    sort(t.begin(),t.end());
    for(int p=0;p<t.size();p++){
        cout<<t[p]<<" ";
    }
    }
}
