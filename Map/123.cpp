#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    map<string, int> numbers;
    numbers["one"] = 1;
    numbers["two"] = 2;
    numbers["three"] = 3;
    
    map<string, int> iterator it = numbers.begin();
    while (numbers !=)
    {

        cout << "key: " << it->first << ", Value :" << it->second << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
