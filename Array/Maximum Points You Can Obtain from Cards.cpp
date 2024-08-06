class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        int n = cardPoints.size();

        for (int i = 0; i < k; i++) {
            sum = sum + cardPoints[i];
        }
        int currentSum = sum;

        for (int i = 0; i < k; i++) {
            currentSum =
                currentSum - cardPoints[k - 1 - i] + cardPoints[n - 1 - i];
            sum = max(currentSum, sum);
        }
        return sum;
    }
};
