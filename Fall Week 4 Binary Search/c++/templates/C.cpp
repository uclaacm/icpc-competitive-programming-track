#include <bits/stdc++.h>
using namespace std;

int main() {
    // Read input
    int n, S, tmp;
    // We use long long to avoid overflow errors.
    vector<long long> a = {-1}; // To ensure 1-based indexing
    cin>>n>>S;
    for (int i = 1; i<=n; i++) {
        cin>>tmp;
        a.push_back(tmp);
    }

    // Binary search on k
    // Loop invariant: k_low <= k < k_high
    // Note the asymmetry in these inequalities. This helps avoid off-by-ones.
    // Again, we are using long long to avoid overflow errors.
    long long k_low = 0;
    long long k_high = n+1;
    long long T = 0;
    while (k_high - k_low > 1) {
        // Your code here
    }
    return 0;
}