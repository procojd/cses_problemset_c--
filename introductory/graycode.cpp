#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define pob pop_back
#define mod 1000000007
typedef vector<int> vec;
typedef long long ll;


vector<string>solve(int n)
{
    vector<string>v;
    if(n==1)
    {
        v.pb("0");
        v.pb("1");
        return v;
    }

    v=solve(n-1);
    int s=v.size();
    vector<string>temp;
    for(int i=0;i<s;i++)
    {
        temp.pb("0"+v[i]);
    }
    for(int i=s-1;i>=0;i--)
    {
        temp.pb("1"+v[i]);
    }
    return temp;
}

int main()
{
    int n;
    cin>>n;
   vector<string>v= solve(n);
    for(auto i:v)
    {
        cout<<i<<"\n";
    }
    return 0;
}
