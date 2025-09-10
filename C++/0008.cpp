#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> nums(5);

    int n = 0;
    while(n++ != 4) {
        cin >> nums[n];
    }

    long long max_el = *max_element(nums.begin(), nums.end());
    long long min_el = *min_element(nums.begin(), nums.end());

    long long sum = accumulate(nums.begin(), nums.end(), 0);
    cout << sum - max_el << " " << sum - min_el << endl;

    return 0;
}