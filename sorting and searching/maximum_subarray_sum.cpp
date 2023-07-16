#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pob pop_back
#define mod 1000000007
typedef vector<int> vec;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    vector<ll> v(n);
    ll ans=INT_MIN;
    ll currsum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        currsum=max(v[i],currsum+v[i]);
        ans=max(ans,currsum);

    }
    cout<<ans;


}