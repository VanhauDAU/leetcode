class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> cnt1, cnt2;
        
        for (string &w : words1) cnt1[w]++;
        for (string &w : words2) cnt2[w]++;
        
        int ans = 0;
        for (auto &p : cnt1) {
            if (p.second == 1 && cnt2[p.first] == 1) {
                ans++;
            }
        }
        
        return ans;
    }
};