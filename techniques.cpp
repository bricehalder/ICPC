#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

/* Compile:  g++ -std=c++11 -O2 -Wall techniques.cpp -o techniques */

void search(int i) { return; }

int main() {
    /* File I/O if needed */
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    /* Basic input  */
    int a, b;
    string x;
    cin >> a >> b >> x;

    /* scanf and printf a little bit faster than cin/cout */
    int a, b;
    scanf("%d %d", &a, &b);

    int a = 123, b = 456;
    printf("%d %d\n", a, b);

    string s;
    getline(cin, s);

    /* Unknown amount of data */
    while (cin >> x) {
        // code
    }

    /* Shortening examples */
    int x1, x2, y1, y2, i;
    vector<pair<int, int>> v;
    v.push_back(make_pair(x1, y1));
    v.push_back(make_pair(x2, y2));
    int d = v[i].first + v[i].second;

    vector<pi> v;
    v.PB(MP(x1, y1));
    v.PB(MP(x2, y2));
    int d = v[i].F + v[i].S;
    
    for (int i = 0; i < 100; i++) {
        search(i);
    }

    REP(i, 0, 100) {
        search(i);
    }

    // solution comes here
}