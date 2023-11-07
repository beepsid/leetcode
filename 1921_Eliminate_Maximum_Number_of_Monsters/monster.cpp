#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            ans.push_back((dist[i] + speed[i] - 1) / speed[i]);
        }

        sort(ans.begin(), ans.end());

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (ans[i] <= i) {
                break;
            }
            count++;
        }

        return count;
    }
};


int main() {
    vector<int> dist = {3,2,4};
    vector<int> speed = {5,3,2};

    Solution solution;

    int result = solution.eliminateMaximum(dist, speed);

    cout << result << endl;

    return 0;
}