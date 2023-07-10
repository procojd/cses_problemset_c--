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
    vec v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end()); 
    int count=1;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]!=v[i+1])
        count++;

    }
    cout<<count;
}