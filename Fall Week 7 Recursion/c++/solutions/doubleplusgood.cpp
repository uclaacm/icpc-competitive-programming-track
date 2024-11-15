#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<string> nums; // The numbers in the input
// Store all possible number in 'ans'; we provide template code for making them unique
vector<long long> ans;
void solve(int pos, string curnum, long long sum){
    // Reminder: to convert a string 's' to a long long int, use stoll(s)
    // We need long long ints because there can be 18 digits, but a long long int is large enough to store the answer
    if(pos == nums.size()){
        if(curnum.size() != 0) sum += stoll(curnum);
        ans.push_back(sum);
        return;
    }
    if(curnum.size() != 0) solve(pos, "", sum + stoll(curnum));
    solve(pos + 1, curnum + nums[pos], sum);

}
int main(){
    /* Reading and parsing the input*/
    string s;
    cin >> s;
    for(char& c : s) if(c == '+') c = ' ';
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        nums.push_back(tmp);
    }
    /* End input*/

    // Begin recusion
    solve(0, "", 0); 

    // Find unique elements and print answer  
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    cout << ans.size() << '\n';
}