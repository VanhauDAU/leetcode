class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> kinds(candyType.begin(), candyType.end());
        return min((int)kinds.size(), (int)candyType.size() / 2);
    }
};