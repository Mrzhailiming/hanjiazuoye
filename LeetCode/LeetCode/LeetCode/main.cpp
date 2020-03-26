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
//
//#include <string>
//#include <iostream>
//int main(){
//	string a, b;
//
//	std::cin >> a >> b;
//	int totalNum = a.size();
//	int correctNum = 0;
//	for (int i = 0; i < totalNum; ++i){
//		if ((a[i] >= 'A' && a[i] <= 'Z') ||
//			(a[i] >= 'a' && a[i] <= 'z') ||
//			(a[i] >= '0' && a[i] <= '9')){
//			//对应位为1
//			if (b[i] == '1'){
//				++correctNum;
//			}
//		}
//		else{
//			//对应位为0
//			if (b[i] == '0'){
//				++correctNum;
//			}
//		}
//	}
//	double ret = correctNum * 100.0 / totalNum;
//	printf("%.2lf\n", ret);
//	return 0;
//}

//


//#include <iostream>
//using namespace std;
//
//void fun(int n, int* arr){
//	//第n个 - 第n - 1g个 第 n - 2个 - 第n-1个
//	double pi = 3.1415926;
//	double ret = 0.0;
//	int cur = n - 1;
//
//	while (cur > 0){
//		ret += (pi * ((arr[cur] * arr[cur]) - (arr[cur - 1] * arr[cur - 1])));
//		cur -= 2;
//	}
//	if (n % 2 == 1){
//		ret += (pi * arr[0] * arr[0]);
//	}
//	printf("%.5lf\n", ret);
//}
//
//
//int main(){
//
//	int n = 0;
//	
//	cin >> n;
//	int* arr = new int[n];
//	int i = 0;
//	for (; i < n; ++i){
//		cin >> arr[i];
//	}
//	i = 0;
//	for (; i < n - 1; ++i){
//		int j = i + 1;
//		for (; j < n; ++j){
//			if (arr[i] > arr[j]){
//				swap(arr[i], arr[j]);
//			}
//		}
//	}
//	fun(n, arr);
//	return 0;
//}


#include <iostream>
using namespace std;

int ret = 0;
int i = 0;

void fun(int n, int* arr){
	if (n < 9){
		ret += arr[i++];
		return;
	}
	int cur = n % 10;
	fun(n / 10, arr);
	if (i < n)
	ret = ret * 10 + arr[i++];
}

int main(){
	int n = 0;

	cin >> n;
	int* arr = new int[1024];
	int i = 0;
	while (i < 3){
		scanf("%d", &arr[i++]);
	}

	int flag = 0;
	if (n < 0){
		flag = 1;
		n = abs(n);
	}

	fun(n, arr);

	cout << ret;

	return 0;
}