class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int cnt[26] = {0};
        for (char c : s) {
            cnt[c - 'a']++;
        }
        int freq = 0;
        for (int i = 0; i < 26; i++) {
            if (cnt[i] != 0) {
                freq = cnt[i];
                break;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (cnt[i] != 0 && cnt[i] != freq) {
                return false;
            }
        }
        return true;
    }
};