#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
//bool Find(int target, vector<vector<int> > array) {
//	int len = array.size();
//	int width = array[0].size();
//	int i = 0;
//	int j = width - 1;
//	for (i = 0; i < len; ++i){
//		//tar 大于每一列的最后一个元素
//		if (target > array[i][j]){
//			continue;
//		}
//		//tar 小于每一列的第一个元素
//		//if(target < array[i][0]){
//		//    return false;
//		//}
//		int index = 0;
//		for (index = 0; index < width; ++index){
//			if (target == array[i][index]){
//				return true;
//			}
//		}
//	}
//	return false;
//}

//void replaceSpace(char *str, int length) {
//	//开辟一个3倍大小的字符数组
//	char ret[1024] = { 0 };
//	const char tar[4] = { '%', '2', '0' , '\0'};
//	//int count = 0;
//	int i = 0;
//	while (i < length){
//		//如果str[i] == ' ';
//		if (str[i] == ' '){
//			//替换为"%20"
//			strcat(ret, tar);
//			++i;
//			continue;
//		}
//		char cat[2] = {str[i], '\0'};
//		strcat(ret, cat);
//		++i;
//	}
//	str = ret;
//	std::cout << str << std::endl;
//}
//
//int main(){
//	char* str = "w r";
//	replaceSpace(str, 3);
//	
//	return 0;
//}

////
//vector<int> printListFromTailToHead(ListNode* head) {
//	vector<int> ret;
//
//	while (head){
//		ret.insert(ret.begin(), head->val);
//		head = head->next;
//	}
//	return ret;
//}

//TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
//	int len = vin.size();
//	if (len == 0){
//		return NULL;
//	}
//	vector<int> pLeft, pRight, vLeft, vRight;
//	TreeNode* root = new TreeNode(pre[0]);
//	//root->val = pre[0];
//	int i = 0;
//	for (i = 0; i < len; ++i){
//		//找前序遍历第一个元素在中序遍历中的位置
//		if (pre[0] == vin[i]){
//			//找到跳出
//			break;
//		}
//	}
//	//左子树的元素
//	int j = 0;
//	for (j = 0; j < i; ++j){
//		pLeft.push_back(pre[j + 1]);
//		vLeft.push_back(vin[j]);
//	}
//	//右子树的元素
//	for (j = i + 1; j < len; ++j){
//		pRight.push_back(pre[j]);
//		vRight.push_back(vin[j]);
//	}
//	root->left = reConstructBinaryTree(pLeft, vLeft);
//	root->right = reConstructBinaryTree(pRight, vRight);
//	return root;
//}


//void push(int node) {
//	stack1.push(node);
//}
//
//int pop() {
//	//拿Stack2作为队列的出队
//	//2 为空的情况
//	if (stack2.empty() == 1){
//		//1也为空
//		if (stack1.empty() == 1){
//			return -1;
//		}
//		// 1 不为空
//		else{
//			while (stack1.empty() != 1){
//				//把 1 中的元素移动到 2 中
//				int top = stack1.top();
//				stack1.pop();
//				stack2.push(top);
//			}
//		}
//	}
//	//2 不为空的情况
//	int top = stack2.top();
//	stack2.pop();
//	return top;
//}


//int minNumberInRotateArray(vector<int> rotateArray) {
//	int len = rotateArray.size();
//	if (len == 0){
//		return 0;
//	}
//	int i = 0;
//	int min = rotateArray[i];
//	for (i = 0; i < len; ++i){
//		if (min > rotateArray[i]){
//			min = rotateArray[i];
//		}
//	}
//	return min;
//}

//斐波那契
//int Fibonacci(int n) {
//	int ret = 0;
//	if (n == 1){
//		return 1;
//	}
//	if (n == 2){
//		return 1;
//	}
//	return ret = Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//
//int main(){
//	int ret = Fibonacci(4);
//	return 0;
//}

//青蛙跳台阶
//int jumpFloor(int number) {
//	int a = 1;
//	int b = 2;
//	int ret = 0;
//	int n = number;
//	if (n == 1){
//		return 1;
//	}
//	if (n == 2){
//		return 2;
//	}
//	int i = 3;
//	for (i = 3; i <= n; ++i){
//		ret = a + b;
//		a = b;
//		b = ret;
//	}
//	return ret;
//}

//int jumpFloorII(int number) {
//	if (number == 1){
//		return 1;
//	}
//	if (number == 2){
//		return 2;
//	}
//	int ret = 2;
//	for (int i = 3; i <= number; ++i){
//		ret = 2 * ret;
//	}
//	return ret;
//}
//
//int main(){
//	int ret = jumpFloorII(4);
//	return 0;
//}

//int  NumberOf1(int n) {
//	int i = 0;
//	int count = 0;
//	size_t x = n;
//	for (i = 0; i < 32; ++i){
//		if ((1 & (x >> i)) == 1){
//			++count;
//		}
//	}
//	return count;
//}
//
//int main(){
//	int n = -1;
//	size_t x = n;
//	int ret = NumberOf1(x);
//	
//
//	return 0;
//}

//
//double Power(double base, int exponent) {
//	if (base == 0.0){
//		return 0.0;
//	}
//	if (exponent == 1){
//		return base;
//	}
//	double ret = 1.0;
//	int flag = 0;
//	int e = exponent;
//	if (e < 0){
//		flag = 1;
//		e = -e;
//	}
//	while (e){
//		if (e & 1 == 1){
//			ret *= base;
//		}
//		base *= base;
//		e >>= 1;
//	}
//	return flag ? 1 / ret : ret;
//}
//int main(){
//	double d = Power(2.0, 2);
//	return 0;
//}

//#include <vector>
//void swap(int* a, int* b){
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void reOrderArray(vector<int> &array) {
//	int begin = 0;
//	int end = array.size() - 1;
//	while (begin < end){
//		while (begin < end && array[begin] % 2 != 0){
//			++begin;
//		}
//		while (begin < end && array[end] % 2 == 0){
//			--end;
//		}
//		while (begin < end){
//			swap(&array[begin], &array[end]);
//			++begin;
//			--end;
//		}
//	}
//}
//
//int main(){
//	vector<int> a = { 1, 7, 6, 5, 4, 3, 2 };
//	reOrderArray(a);
//	return 0;
//}

//替换空格
//void replaceSpace(char *str, int length) {
//	char* tar = "%20";
//	char ret[1024] = { 0 };
//	int i = 0;
//	while (i < length){
//		if (str[i] == ' '){
//			strcat(ret, tar);
//		}
//		else {
//			char tmp[2] = { str[i], '\0' };
//			strcat(ret, tmp);
//		}
//		++i;
//	}
//	str = new char[1024];
//	strcpy(str, ret);
//}
//
//int main(){
//	char* str = "a a";
//	replaceSpace(str, sizeof(str));
//	return 0;
//}

//反转单链表
//ListNode* ReverseList(ListNode* pHead) {
//	ListNode* newHead, *newTail;
//	ListNode* prev, *cur, *next;
//	prev = NULL;
//	cur = pHead;
//	while (cur){
//		next = cur->next;
//		cur->next = prev;
//		prev = cur;
//		cur = next;
//		if (next){
//			next = next->next;
//		}
//	}
//	return prev;
//}

//合并两个排序的链表
//ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
//{
//	ListNode* head1, *head2, *cur;
//	ListNode* newHead = new struct ListNode(0);
//	cur = newHead;
//	head1 = pHead1;
//	head2 = pHead2;
//	while (head1 && head2){
//		if (head1->val < head2->val){
//			cur->next = head1;
//			head1 = head1->next;
//		}
//		else{
//			cur->next = head2;
//			head2 = head2->next;
//		}
//		cur = cur->next;
//	}
//	while (head1){
//		cur->next = head1;
//		head1 = head1->next;
//		cur = cur->next;
//	}
//	while (head2){
//		cur->next = head2;
//		head2 = head2->next;
//		cur = cur->next;
//	}
//	return newHead->next;
//}
//

//判断一棵树是不是子树
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//
//bool CmpNode(TreeNode* h1, TreeNode* h2){
//	//b遍历完了,
//	if (h2 == NULL){
//		return true;
//	}
//	//b还有, a遍历完了
//	if (h1 == NULL){
//		return false;
//	}
//	if (h1->val == h2->val){
//		return CmpNode(h1->left, h2->left)
//			&& CmpNode(h1->right, h2->right);
//	}
//	return false;
//}
//bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
//{
//	if (pRoot2 == NULL || pRoot2 == NULL){
//		return false;
//	}
//	return CmpNode(pRoot1, pRoot2)
//		|| HasSubtree(pRoot1->left, pRoot2)
//		|| HasSubtree(pRoot1->right, pRoot2);
//}
//
//bool CmpNode(TreeNode* h1, TreeNode* h2){
//	//b遍历完了,
//	if (h2 == NULL){
//		return true;
//	}
//	//b还有, a遍历完了
//	if (h1 == NULL){
//		return false;
//	}
//	if (h1->val != h2->val){
//		return false;
//	}
//	return CmpNode(h1->left, h2->left)
//		&& CmpNode(h1->right, h2->right);
//}
//bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
//{
//	bool ret = false;
//	if (pRoot2 == NULL || pRoot2 == NULL){
//		return false;
//	}
//	if (pRoot1 != NULL && pRoot2 != NULL){
//		if (pRoot1->val == pRoot2->val){
//			ret = CmpNode(pRoot1, pRoot2);
//		}
//		if (ret == false){
//			ret = HasSubtree(pRoot1->left, pRoot2);
//		}
//		if (ret == false){
//			ret = HasSubtree(pRoot1->right, pRoot2);
//		}
//	}
//	return ret;
//	//return CmpNode(pRoot1, pRoot2)
//	//    || HasSubtree(pRoot1->left, pRoot2)
//	//    || HasSubtree(pRoot1->right, pRoot2);
//}
//int main(){
//	TreeNode* head = new TreeNode(1);
//	head->left = new TreeNode(2);
//	head->left->left = new TreeNode(4);
//	head->left->right = new TreeNode(5);
//	head->right = new TreeNode(3);
//	cout << HasSubtree(head, head->left) << endl;
//	return 0;
//}

//镜像二叉树
//void Mirror(TreeNode *pRoot) {
//	if (pRoot == NULL || (pRoot->left == NULL && pRoot->right == NULL)){
//		return;
//	}
//	TreeNode* tmp = pRoot->left;
//	pRoot->left = pRoot->right;
//	pRoot->right = tmp;
//	Mirror(pRoot->left);
//	Mirror(pRoot->right);
//}