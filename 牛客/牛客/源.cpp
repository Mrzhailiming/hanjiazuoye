
#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;
//int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//void fun(int *pa, int n);
//int main()
//{
//	int m = 10;
//	fun(a, m);
//	cout << a[6] << endl;
//}
//void fun(int *pa, int n)
//{
//	for (int i = n - 1; i > 0; i--)
//		*(pa + 6) += pa[i];
//}

//数组第k大的元素
//class Solution {
//public:
//	int findKthLargest(vector<int>& nums, int k) {
//		multiset<int> s;
//		for (const auto& e : nums){
//			s.insert(e);
//		}
//		auto it = s.end();
//		while (k--){
//			--it;
//		}
//		return *it;
//	}
//};

#include <string>


int main(){
	string s;
	while (getline(cin, s)){
		s += '\0';
		int len = s.size();
		int i = 0;
		string tmp;
		map<string, int> mp;
		for (; i <= len; ++i){
			if (s[i] == ' ' || s[i] == '.'
				|| s[i] == '(' || s[i] == ','
				|| s[i] == '\0'){
				if (tmp != "")
					++mp[tmp];
				tmp = "";
			}
			else{
				tmp += tolower(s[i]);
			}
		}
		for (const auto& e : mp){
			cout << e.first << ":" << e.second << endl;
		}
	}
	
	return 0;
}