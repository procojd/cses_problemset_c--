#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back 
#define pob pop_back
#define mod 1000000007
typedef vector<int> vec;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    int ans=1;
    for(int i=0;i<n;i++)
    {
        ans=((ans%mod)*2)%mod;

    }
    cout<<ans;
    return 0;
}