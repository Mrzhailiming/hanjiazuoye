#define _CRT_SECURE_NO_WARNINGS
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

//#include <string>
//
//
//int main(){
//	string s;
//	while (getline(cin, s)){
//		s += '\0';
//		int len = s.size();
//		int i = 0;
//		string tmp;
//		map<string, int> mp;
//		for (; i <= len; ++i){
//			if (s[i] == ' ' || s[i] == '.'
//				|| s[i] == '(' || s[i] == ','
//				|| s[i] == '\0'){
//				if (tmp != "")
//					++mp[tmp];
//				tmp = "";
//			}
//			else{
//				tmp += tolower(s[i]);
//			}
//		}
//		for (const auto& e : mp){
//			cout << e.first << ":" << e.second << endl;
//		}
//	}
//	
//	return 0;
//}

//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main(){
//	Test();
//	return 0;
//}

//
////二叉树的公共祖先 lc236
//bool _low(TreeNode* root, TreeNode* tar){
//	if (root == NULL){
//		return false;
//	}
//	if (root->val == tar->val){
//		return true;
//	}
//	return _low(root->left, tar)
//		|| _low(root->right, tar);
//}
//TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//	//根与其中一个相符合
//	if (root->val == p->val || root->val == q->val){
//		return root;
//	}
//	//存在于一边
//	//p和q存在左边
//	if (_low(root->left, p) && _low(root->left, q)){
//		return lowestCommonAncestor(root->left, p, q);
//	}
//	//p和q存在右边
//	else if (_low(root->right, p) && _low(root->right, q)){
//		return lowestCommonAncestor(root->right, p, q);
//	}
//	return root;
//}

//int main(){
//	string ret;
//	char* des = new char();
//	ret += itoa(-1, des, 1);
//	return 0;
//}

//class out{
//public:
//	static int a;
//	class in{
//	public:
//		void fun(){
//			cout << a << endl;
//		}
//	};
//};
//
//int out::a = 10;
//
//int main(){
//	out::in a;
//	a.fun();
//	return 0;
//}



//int main(){
//	int* p = (int*)malloc(4);
//	int* p2 = (int*)realloc(p, 1024);
//
//	return 0;
//}


//int main(){
//	string s("sadsadasd");
//	s.reserve(2);
//	s.reserve(100);
//	return 0;
//}
//
//int* g = nullptr;
//
//
//void test(){
//	int c = 10;
//	int* a = &c;
//	swap(g, a);
//}
//
//int main(){
//	test();
//	return 0;
//}
//

//class A{
//public:
//	static void fun(A a){
//		a._a;
//	}
//	void afun(){
//
//	}
//	int _a;
//};

class Solution {
public:
	string multiply(string num1, string num2) {
		if (num1 == "0" || num2 == "0"){
			return "0";
		}
		int len1 = num1.size();
		int len2 = num2.size();
		int arr[len1 + len2] = { 0 };
		int i = 0;
		for (; i < len1; ++i){
			int j = 0;
			for (; j < len2; ++j){
				//i + j 要加一, 不然arr最后一个元素没有访问到,第一个元素会被占有, 但有可能会进位, 所以要加 1
				arr[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
			}
		}
		i = len1 + len2 - 1;
		for (; i > 0; --i){
			if (arr[i] > 9){
				arr[i - 1] += (arr[i] / 10);
				arr[i] = arr[i] % 10;
			}
		}
		string ret;
		//两个数相乘, 最大长度为两个数的长度和
		i = arr[0] ? 0 : 1;
		for (; i < len1 + len2; ++i){
			ret += (arr[i] + '0');
		}
		return ret;
	}
};