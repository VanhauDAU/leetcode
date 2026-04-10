class Solution {
public:
    int digitSum(int x) {
        int sum = 0;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }
    int countBalls(int lowLimit, int highLimit) {
        vector<int> box(50, 0);
        int ans = 0;

        for (int i = lowLimit; i <= highLimit; i++) {
            int s = digitSum(i);
            box[s]++;
            ans = max(ans, box[s]);
        }
        return ans;
    }
};