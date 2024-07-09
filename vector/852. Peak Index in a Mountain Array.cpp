/**
 *
 * Author : Md.Ariful Islam
 * Date : 09-07-2024
 * time : 23:54:35
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
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = max_element(arr.begin(), arr.end()) - arr.begin();
        return n;

    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


}