#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

////������������к�lc 53
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

////���������lc121
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
//			//��ӦλΪ1
//			if (b[i] == '1'){
//				++correctNum;
//			}
//		}
//		else{
//			//��ӦλΪ0
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
//	//��n�� - ��n - 1g�� �� n - 2�� - ��n-1��
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


//#include <iostream>
//using namespace std;
//
//int ret = 0;
//int i = 0;
//
//void fun(int n, int* arr){
//	if (n < 9){
//		ret += arr[i++];
//		return;
//	}
//	int cur = n % 10;
//	fun(n / 10, arr);
//	if (i < n)
//	ret = ret * 10 + arr[i++];
//}
//
//int main(){
//	int n = 0;
//
//	cin >> n;
//	int* arr = new int[1024];
//	int i = 0;
//	while (i < 3){
//		scanf("%d", &arr[i++]);
//	}
//
//	int flag = 0;
//	if (n < 0){
//		flag = 1;
//		n = abs(n);
//	}
//
//	fun(n, arr);
//
//	cout << ret;
//
//	return 0;
//}
//
//
////����ģʽ
//class singleton{
//public:
//	 static singleton* getInstance(){
//		if (instance == NULL){
//			instance = new singleton();
//		}
//		return instance;
//	}
//private:
//	singleton();
//	singleton(singleton& cp);
//	static singleton* instance;
//};
//singleton* singleton::instance = new singleton();
//int main(){
//	singleton* in = singleton::getInstance();
//	return 0;
//}


//
//
////0-1��������
//#include <algorithm>
//void fun(int* v, int* p, int len, int capacity){
//	int dp[100][100] = { 0 };
//	//�ȳ�ʼ���ж�����
//
//	int i = 1;
//	int j;
//	for (i = 1; i <= len; ++i){
//		j = 1;
//		for (j = 1; j <= capacity; ++j){
//			//����������ڵ�i����Ʒ�����
//			if (j >= v[i - 1]){
//				dp[i][j] = max(dp[i - 1][j - v[i - 1]] + p[i - 1], dp[i - 1][j]);
//			}
//			else{
//				dp[i][j] = dp[i - 1][j];
//			}
//		}
//	}
//	cout << dp[len][capacity] << endl;
//}
//
//int main(){
//	//20
//	int v[] = { 15, 10, 2, 5, 8 };
//	int p[] = { 16, 10, 6, 7, 9 };
//	fun(v, p, 5, 20);
//	return 0;
//}


//�и�������
#include <algorithm>
//
//void fun(int* arr, int n){
//	//����C[i] Ϊ���� i�ĸ������ܹ���õ��������
//	//���� ��j��, ���߲���
//	// C[i] = max(p[i], p[j] + C[i - j])
//	int c[100] = { 0 };
//	int rec[100] = { 0 };
//	int i = 1;
//	for (; i <= n; ++i){
//		int j = 1;
//		//���ڵ�i��,���ڲ���
//		rec[i] = i;
//		int tmp = arr[i - 1];
//		for (; j < i; ++j){
//			if (tmp < arr[j - 1] + c[i - j]){//ע������arr�Ǵ�0��ʼ��
//				tmp = arr[j - 1] + c[i - j];
//				rec[i] = j;
//			}
//		}
//		c[i] = tmp;
//	}
//	cout << c[n] << endl;
//	while (n > 0){
//		cout << rec[n] << endl;
//		n -= rec[n];
//	}
//}
//
//void fun(int* arr, int n){
//	//����c[i] �ǳ���Ϊi�ĸ����ܻ�õ��������
//	//c[i] = max(arr[i], arr[j] + c[i-j]), ���� ��������jλ����
//	int c[100] = { 0 };
//	int rec[100] = { 0 };
//	int i = 1;
//	for (; i <= n; ++i){
//		c[i] = arr[i];
//		rec[i] = i;
//		int j = 1;
//		for (; j < i; ++j){
//			if (c[i] < arr[j] + c[i - j]){
//				c[i] = arr[j] + c[i - j];
//				rec[i] = j;
//			}
//		}
//	}
//	cout << c[n] << endl;
//	while (n > 0){
//		cout << rec[n] << endl;
//		n -= rec[n];
//	}
// }
//
//int main(){
//	
//	int p[] = { 0 ,1, 5, 7, 9, 10};
//	fun(p, 5);
//	return 0;
//}


void fun(int* p, int n){
	//���� arr[i,j] Ϊ������U(i, j)����С�����˴���
	//Ҫ��֤i <= j , ��i = jʱ, ����Ϊ0
	int arr[10][10] = { 0 };
	int i = 0;
	for (i = 0; i <= n; ++i){
		arr[i][i] = 0;//�Խ���
	}
	int len = 2;
	//�ӳ���Ϊ2,һֱ������Ϊn
	for (len = 2; len <= n; ++len){
		//i�ӵ�һ��λ�ÿ�ʼ
		int i = 1;
		for (i = 1; i <= n - len + 1; ++i){
			//j��λ���Ǻ�i���len-1��
			int j = i + len - 1;
			//ö�ٽ�ϵ�λ��k, ��i��ʼ, ��j-1����
			int k = i;
			arr[i][j] = INT_MAX;
			for (k = i; k < j; ++k){
				//���Ϊk��ʱ��,��������Ĵ�С
				int q = arr[i][k] + arr[k + 1][j] + p[i] * p[k] * p[j];
				if (q < arr[i][j]){
					arr[i][j] = q;
				}
			}
		}
	}
	cout << arr[1][n] << endl;
}

int main(){

	int p[] = { 3, 4, 6, 1, 3};
	fun(p, 4);
	return 0;
}