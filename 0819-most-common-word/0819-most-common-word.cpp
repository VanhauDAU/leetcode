class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> bannedWords(banned.begin(), banned.end());
        unordered_map<string, int> freq;
        for (char &c : paragraph) {
            if (isalpha(c)) {
                c = tolower(c);
            } else {
                c = ' ';
            }
        }
        string word;
        stringstream ss(paragraph);
        while (ss >> word) {
            if (bannedWords.find(word) == bannedWords.end()) {
                freq[word]++;
            }
        }
        string result = "";
        int maxCount = 0;
        for (auto &p : freq) {
            if (p.second > maxCount) {
                maxCount = p.second;
                result = p.first;
            }
        }
        return result;
    }
};