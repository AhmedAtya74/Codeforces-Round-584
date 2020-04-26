#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <cassert>
#include <cstdio>
#include <queue>
#include <set>
#include <map>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <algorithm>
#include <numeric>

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i < (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)

using namespace std;


typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long i64;
typedef vector<i64> vi64;
typedef vector<vi64> vvi64;
const int A1 = 2;
int main()
{
  
    int T; cin >> T;
    for (int i = 0; i < T; i++) {
        int N; cin >> N;
        string s; cin >> s;

        vi ls(N);
        bool ok = true;

        for (int ln = 0 + '0'; ln < 10 + '0'; ln++) 
        {
            int fi = -1, se = -1; fill(ls.begin(), ls.end(), -1);
            ok = true;
            for (int j = 0; j < N && ok; j++) 
            {
                if (s[j] < ln) 
                {
                    if (fi > s[j]) ok = false;
                    else { fi = s[j]; ls[j] = 1; }
                }
                else if (s[j] == ln) 
                {
                    if (se <= s[j]) { se = s[j]; ls[j] = 2; }
                    else { fi = s[j]; ls[j] = 1; }
                }
                else if (s[j] > ln) 
                {
                    if (se > s[j]) ok = false;
                    else { se = s[j]; ls[j] = 2; }
                }
            }
            if (ok == true) break;
        }

        if (ok) {
            for (int x : ls) cout << x; cout << endl;
        }
        else {
            cout << '-' << endl;
        }
    }
    
    return 0;
}
