#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define long long ll
#define push_back pb
#define pop_back pob
typedef vector<int> vec;
int main(){
    string s;
    int count=1;
    int maxlen=1;
    cin>>s;
    for(int i=1;i<s.size();i++)
    {
        if(s[i-1]==s[i])
        {
            count++;
        }
        else{
            count=1;
        }
        maxlen=max(maxlen,count);

    }
    cout<<maxlen;
    return 0;
}