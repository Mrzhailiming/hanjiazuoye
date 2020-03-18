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
//
//#include <string>
//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//void fun(string& str){
//	unordered_map<char, int> mp;
//	for (const auto e : str){
//		++mp[e];
//	}
//	for (const auto e : mp){
//		if (e.second == 1){
//			cout << e.first << endl;
//		}
//	}
//	cout << -1 << endl;
//}
//
//
//int main(){
//	string str;
//	while (cin >> str){
//		fun(str);
//	}
//	return 0;
//}

//#include <vector>
//int main(){
//	vector<int> v(11, 1);
//	v.reserve(15);
//	return 0;
//}


////lc 17
//#include <vector>
//#include <map>
//vector<string> mp = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
//void _letter(vector<string>& ret, string digits, int count, string tmp){
//	if (count == digits.size()){
//		ret.push_back(tmp);
//		return;
//	}
//	//获取字符串
//	string str = mp[digits[count] - '0'];
//	int len = str.size();
//	for (int i = 0; i < len; ++i){
//		_letter(ret, digits, count + 1, tmp + str[i]);
//	}
//}
//vector<string> letterCombinations(string digits) {
//	vector<string> ret;
//	string tmp;
//	_letter(ret, digits, 0, tmp);
//	return ret;
//}
//
//int main(){
//	string s("23");
//	letterCombinations(s);
//	return 0;
//}

//int main(){
//	int len = sizeof(int);
//	len = sizeof(long);
//	return 0;
//}

////类型萃取
//class trueClass{
//public:
//	static bool get(){
//		return true;
//	}
//};
//
//class falseClass{
//public:
//	static bool get(){
//		return false;
//	}
//};
//
//template <class T>
//class Cuiqu{
//public:
//	typedef trueClass type;
//};
//
////特化
//template <>
//class Cuiqu<int>{
//public:
//	typedef falseClass type;
//};
//
//int main(){
//	bool ret = Cuiqu<int>::type::get();
//	ret = Cuiqu<char>::type::get();
//	return 0;
//}



//
//class Base2 {
//public:
//	int _b2;
//};
//class Base1 {
//public:
//	int _b1;
//};
//class Derive : public Base2,public Base1{
//public:
//	int _d;
//};
//int main(){
//	// A. p1 == p2 == p3
//	// B. p1 < p2 < p3
//	// C. p1 == p3 != p2
//	// D. p1 != p2 != p3
//	Derive d;
//	Base1* p1 = &d;
//	Base2* p2 = &d;
//	Derive* p3 = &d;
//	return 0;
//}

//
//void fun(int){
//
//}
//void fun(int){
//
//}
//
//int main(){
//	fun(1);
//	return 0;
//}

//
//class Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Func1()" << endl;
//	}
//private:
//	int _b = 1;
//};

//class Base
//{
//public:
//	void Func1()
//	{
//		cout << "Base::Func1()" << endl;
//	}
//	virtual void Func2()
//	{
//cout << "Base::Func2()" << endl;
//}
//void Func3()
//{
//	cout << "Base::Func3()" << endl;
//}
//private:
//	int _b = 1;
//};
//class Derive : public Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Derive::Func1()" << endl;
//	}
//	virtual void fund(){
//		;
//	}
//private:
//	int _d = 2;
//};
//
//class th : public Derive{
//public:
//	virtual void funth(){
//		;
//	}
//};
//
//int main(){
//	Derive d;
//	th t;
//	int a = sizeof(Derive);
//	return 0;
//}



int main(){
	char str1[100] = "acc";
	char str2[sizeof(str1)];
	return 0; 
}


