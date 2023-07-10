#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<int> vec;
typedef long long ll;

int main(){
    int n;
    

    cin>>n;
    vec v;
    if(n==1)
    {
        cout<<1;
        return 0;
    }

    if(n<4)
    {
        cout<<"NO SOLUTION";
        return 0;

    }

for(int i=2;i<=n;i+=2)
    {
        v.push_back(i);
    };
    for(int i=1;i<=n;i+=2)
    {
        v.push_back(i);
    }
    
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    return 0;


}