#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define pob pop_back
#define mod 1000000007
typedef vector<int> vec;
typedef long long ll;
int main(){
    int n;cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++)
    {
        int first,last;
        cin>>first>>last;
        v.pb({first,last});

    }
    sort(v.begin(),v.end(),[&](
        vec &a,vec &b
    ){
        return a[1]<b[1]; //sorting by start time of the meeting
    });
    int count=1;
    int curr=v[0][1];
    for(int i=1;i<n;i++)
    {
        if(v[i][0]>=curr)
        {
            count++;
            curr=v[i][1];
        }
    }
    cout<<count;
    return 0;
}