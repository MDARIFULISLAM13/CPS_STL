/**
 *
 * Author : Md.Ariful Islam
 * Date : 09-07-2024
 * time : 23:29:06
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vec a(n);
    for (auto& i : a) {
        cin >> i;
    }
    int ck = 0;
    int suma = 0, sumb = 0;

    while (!a.empty()) {
        int x = a[0], y = a.back();
        if (ck == 0) {
            if (x >= y) {
                suma += x;
                a.erase(a.begin());
            }
            else {
                suma += y;
                a.pop_back();
            }
            ck = 1;
        }
        else
        {
            if (x >= y) {
                sumb += x;
                a.erase(a.begin());
            }
            else {
                sumb += y;
                a.pop_back();
            }
            ck = 0;
        }

    }
    cout << suma << " " << sumb;


    return 0;
}