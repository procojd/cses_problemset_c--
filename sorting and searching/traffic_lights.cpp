#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
using namespace std;
#define pb push_back
#define pob pop_back
#define mod 1000000007
typedef vector<int> vec;
typedef long long ll;
int main(){
    int n,m;
    cin>>n>>m;
    multiset<int>mp;
    mp.insert(0);
    mp.insert(n);
int maxi=0;
    for(int i=0;i<m;i++)
    {
        int input;
        cin>>input;
        auto it=mp.upper_bound(input);
        auto it1=mp.lower_bound(input);
         mp.insert(input);
         int d1,d2;
         d1=abs(*it-input);
         d2=abs(*it1-input);

         maxi=max(maxi,max(d1,d2));
         cout<<maxi<<endl;

    }
    return 0;
}