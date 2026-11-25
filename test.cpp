#include <bits/stdc++.h>
 
 
#define ll long long
#define el cout << '\n'
#define fi first
#define se second
#define open freopen("code.INP", "r", stdin); freopen("code.OUT", "w", stdout);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
 
const int maxn = 200005;
const int base = 101;
const int MOD = 1e9+7;
 
 
using namespace std;
 
bool rizz(int fanum_tax, vector<int> &ohio, int skibidi)
{
    if (fanum_tax==0) return true;
    int kingVon = min(ohio[0], skibidi - ohio[0]);
    for (int i = 1; i < fanum_tax; i++)
    {
        int niggv = ohio[i];
        int justin1 = niggv;
        int justin2 = skibidi - niggv;
        vector<int> diddy;
        if (justin1 >= kingVon) diddy.push_back(justin1);
        if (justin2 >= kingVon) diddy.push_back(justin2);
        if (diddy.empty()) return false;
       vector<int>::iterator hawk_tuah = min_element(diddy.begin(), diddy.end());
        kingVon = *hawk_tuah;
    }
    return true;
}
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //open
 
    int bruh; cin >> bruh;
    while (bruh--)
    {
        int fanum_tax, m; cin >> fanum_tax >> m;
        vector<int> ohio;
        for (int i = 1; i <= fanum_tax; i++)
        {
            int x; cin >> x;
            ohio.push_back(x);
        }
        int skibidi; cin >> skibidi;
        cout << (rizz(fanum_tax, ohio, skibidi) == true ? "YES" : "NO") << '\n';
 
    }
 
    cerr << "Time elapsed: " << TIME << "s.\n";
 
    return 0;
}
 
