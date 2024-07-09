/**
 *
 * Author : Md.Ariful Islam
 * Date : 09-07-2024
 * time : 23:10:18
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

    vec a = { 1,2,4,3,2,3 };
    auto it = max_element(a.begin(), a.end());
    cout << *it << endl;
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    // for index
    int n = max_element(a.begin(), a.end()) - a.begin();
    cout << n << endl;
    // int sz = unique(a.begin(), a.end()) - a.begin();
    // cout << sz << endl;
    for (int i : a) {
        cout << i << " ";
    }

    return 0;
}