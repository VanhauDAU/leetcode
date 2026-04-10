class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int cnt[101] = {0};
        for (int x : nums) {
            cnt[x]++;
        }
        int sum = 0;
        for (int i = 1; i <= 100; i++) {
            if (cnt[i] == 1) {
                sum += i;
            }
        }
        return sum;
    }
};