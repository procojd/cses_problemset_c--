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
    int ar[10]={0};
    int ar1[10]={0};

int maxlen=0;
    for( auto i:v)
    {
        int digit1=i/10;
        int digit2=i%10;
      int maxi=max(max(ar[digit1],ar1[digit2]),max(ar1[digit1],ar[digit2]));
      if(maxi==maxlen)
      {
        maxlen++;
      }
      ar[digit1]++;
      ar1[digit2]++;
    }
    cout<<maxlen;


}
