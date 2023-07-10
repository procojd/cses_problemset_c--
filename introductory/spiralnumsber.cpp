#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define push_back pb
#define pop_back pob
typedef vector<int> vec;
typedef long long ll;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        if (x >= y)
        {
            ll ans;
            if (x % 2 != 0)
            {
              
                ans = ((x - 1) * (x - 1)) + y;
            }
            else
            {
                  ans = (x * x) - y + 1;
            }
            cout << ans << "\n";
        }
        else
        {
            ll ans;
            if ( y % 2 != 0 )
            {
                ans = (y * y) - x + 1;
            }
            else
            {
                ans = ((y - 1) * (y - 1)) + x;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}
