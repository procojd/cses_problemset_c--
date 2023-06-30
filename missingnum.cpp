#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define long long ll
#define push_back pb
#define pop_back pob
typedef vector<int> vec;

int main(){

int n;
cin>>n;
vec v(n-1);
for(int i=0;i<n-1;i++)
{
    cin>>v[i];
}
sort(v.begin(),v.end());
int i;
for( i=0;i<n-1;i++)
{
 if(v[i]!=i+1)
 {
    cout<<i+1;
    return 0;
 }

}
 cout<<i+1;
    return 0;

}
