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
    int n;
    cin>>n;
    int ans;
    if(n%10>4)
    {
        ans=n/5+1;

    }
    ans=n/5;
    cout<<ans;
    return 0;
}