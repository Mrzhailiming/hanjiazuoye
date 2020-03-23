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

//int main() {
//	int a = 0;
//	while (a--){
//		printf("%d\n", 10);
//	}
//	vector<vector<int>*> v;
//	int i = 0;
//	const int *const p = &a;
//	i = -1;
//	const int ic = i;
//	const int *pic = &ic;
//	//int *const cpi = &ic;
//	const int *const cpic = &ic;
//	return 0;
//}
//
//int main(){
//	char* str = "dadas";
//	string s(str, str + 2);
//	vector<int> v;
//	v.reserve(100);
//	v.reserve(101);
//	return 0;
//}

//#include <unordered_set>
//#include <set>
//#include <string>
//#include <map>
//
//class data{
//public:
//	int a;
//	int b;
//};
//
//int main(){
//	
//	map<int, int> m;
//	auto ret = m.insert(make_pair(1, 1));
//	ret = m.insert(make_pair(1, 1));
//	ret = m.insert(make_pair(1, 1));
//	return 0;
//}

//int main(){
//	int M, N;
//	while (scanf("%d %d", &M, &N)){
//		int count = 0;
//		while (N--){
//			int a, b, c;
//			scanf("%d %d %d", &a, &b, &c);
//			if (c == 1){
//				++count;
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}

#include <string>
#include <iostream>
int main(){
	string a, b;

	std::cin >> a >> b;
	int totalNum = a.size();
	int correctNum = 0;
	for (int i = 0; i < totalNum; ++i){
		if ((a[i] >= 'A' && a[i] <= 'Z') ||
			(a[i] >= 'a' && a[i] <= 'z') ||
			(a[i] >= '0' && a[i] <= '9')){
			//对应位为1
			if (b[i] == '1'){
				++correctNum;
			}
		}
		else{
			//对应位为0
			if (b[i] == '0'){
				++correctNum;
			}
		}
	}
	double ret = correctNum * 100.0 / totalNum;
	printf("%.2lf\n", ret);
	return 0;
}