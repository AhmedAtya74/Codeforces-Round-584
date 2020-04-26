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
    int N;
    i64 Ans = 0;
    cin >> N;
    string str;
    cin >> str;

    vi64 V2(N);
    for (int j = 0; j < N; j++)
    {
        V2[j] = str[j] - '0';
        Ans += V2[j];
    }
    vi64 A(N), B(N);
    for (int j = 0; j < N; j++)
    {
        cin >> A[j];
        cin >> B[j];
    }

    for (int j = 0; j < 1000; j++)
    {
        for (int i = 0; i < N; i++)
        {
            if (j >= B[i] && (j - B[i]) % A[i] == 0)
            {
                V2[i] ^= 1;
            }
        }
        i64 Cnt = 0;
        for (int i = 0; i < N; i++)
        {
            Cnt += V2[i];
        }
        Ans = max(Ans, Cnt);
    }

    cout << Ans << endl;
    return 0;
}
