#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define push_back pb
#define pop_back pob
typedef long long ll;
typedef vector<int> vec;
int main(){
    int n;
    cin>>n;
    vec v(n);
    for(int  i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll cost=0;
    for (int i = 1; i < v.size(); i++)
    {
        if(v[i]<v[i-1])
        {
            cost=cost+(v[i-1]-v[i]);
            v[i]=v[i-1];
        }
    }
    cout<<cost;
    
}