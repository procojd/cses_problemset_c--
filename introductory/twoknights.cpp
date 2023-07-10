#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define push_back pb
#define pop_back pob
typedef vector<int> vec;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        ll a;
        ll b;
        ll p;
        p=pow(i,2);
        a=p*(p-1)/2;
        b=4*(i-1)*(i-2);
        cout<<a-b<<"\n";
        i++;

    }
    return 0;
}