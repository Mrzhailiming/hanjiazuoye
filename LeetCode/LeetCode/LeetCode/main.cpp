#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;

////最大连续子序列和lc 53
//class Solution {
//public:
//	int maxSubArray(vector<int>& nums) {
//		int len = nums.size();
//		int end[len] = { 0 };
//		int ret = nums[0];
//		end[0] = nums[0];
//		int i = 1;
//		for (; i < len; ++i) {
//			end[i] = max(end[i - 1] + nums[i], nums[i]);
//			ret = max(ret, end[i]);
//		}
//		return ret;
//	}
//};

////求最大利润lc121
//class Solution {
//public:
//	int maxProfit(vector<int>& prices) {
//		if (prices.size() == 0) {
//			return 0;
//		}
//		int maxPro = 0;
//		int minprice = prices[0];
//		for (auto& e : prices) {
//			maxPro = max(maxPro, e - minprice);
//			minprice = min(minprice, e);
//		}
//		return maxPro;
//	}
//};

int main() {
	int a = 0;
	while (a--){
		printf("%d\n", 10);
	}
	return 0;
}

