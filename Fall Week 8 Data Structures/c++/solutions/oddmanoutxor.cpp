#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <utility>
#include <tuple>
#include <string>
#include <iostream>
using namespace std;

// This solution is the same speed, but uses less memory, by using the special properties of the XOR function

void solve(){
    int g;
    cin >> g;
    
    int single = 0;
    for (int j = 0; j < g; j++){
        int num;
        cin >> num;
        single ^= num;
    }
    cout << single;
}

int main(){
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++){
        cout << "Case #" << i << ": ";
        solve();
        cout << endl;
    }
}