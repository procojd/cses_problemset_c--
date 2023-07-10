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
    int m;
    cin>>m;
    vec v(n);
    for(int i=0;i<n;i++)
    {
    cin>>v[i];
    }
    sort(v.begin(),v.end());
    int j=1;
   
    int count=0;
    if(v[j]>=m)
    {
        cout<<n;
        return 0;
    }
    int i=0;
    while(j<n)
    {
        if(v[i]+v[j]<=m)
        {
            count++;
            i+=2;
            j+=2;
        }
        else{
            count++;
            i++;
            j++;
        }

    }
    if(i==n-1)
    count++;
    cout<<count;

}