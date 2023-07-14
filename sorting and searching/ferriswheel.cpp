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
    int count=0;
   int i=0,j=n-1;
   while(i<=j){
    if(v[i]+v[j]<=m)
    {
        i++;j--;
        count++;
    }
    else{
        count++;j--;
    }

   }
   cout<<count;

}