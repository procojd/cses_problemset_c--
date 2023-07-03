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
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if((2*a-b)>=0&&(2*a-b)%3==0&&(2*b-a)>=0&&(2*b-a)%3==0)
        {
            cout<<"YES"<<"\n";
        }
        else cout<<"NO"<<"\n";
    }
    return 0;
}