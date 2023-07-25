#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>

using namespace std;
#define pb push_back
#define pob pop_back
#define inc(v) sort(v.begin(),v.end()) 
#define mod 1000000007
typedef vector<int> vec;

typedef long long ll;
int main(){
    int n;
    cin>>n;
   multiset<int>set;
   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    auto it=set.upper_bound(x);
    if(it==set.end())
    {
        set.insert(x);
        
    }
    else{
        set.erase(it);
        set.insert(x);
    }
    
   }
   cout<<set.size();

    
    return 0;
}
