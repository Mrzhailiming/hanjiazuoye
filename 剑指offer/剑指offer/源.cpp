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
//		//tar ����ÿһ�е����һ��Ԫ��
//		if (target > array[i][j]){
//			continue;
//		}
//		//tar С��ÿһ�еĵ�һ��Ԫ��
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
//	//����һ��3����С���ַ�����
//	char ret[1024] = { 0 };
//	const char tar[4] = { '%', '2', '0' , '\0'};
//	//int count = 0;
//	int i = 0;
//	while (i < length){
//		//���str[i] == ' ';
//		if (str[i] == ' '){
//			//�滻Ϊ"%20"
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
//		//��ǰ�������һ��Ԫ������������е�λ��
//		if (pre[0] == vin[i]){
//			//�ҵ�����
//			break;
//		}
//	}
//	//��������Ԫ��
//	int j = 0;
//	for (j = 0; j < i; ++j){
//		pLeft.push_back(pre[j + 1]);
//		vLeft.push_back(vin[j]);
//	}
//	//��������Ԫ��
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
//	//��Stack2��Ϊ���еĳ���
//	//2 Ϊ�յ����
//	if (stack2.empty() == 1){
//		//1ҲΪ��
//		if (stack1.empty() == 1){
//			return -1;
//		}
//		// 1 ��Ϊ��
//		else{
//			while (stack1.empty() != 1){
//				//�� 1 �е�Ԫ���ƶ��� 2 ��
//				int top = stack1.top();
//				stack1.pop();
//				stack2.push(top);
//			}
//		}
//	}
//	//2 ��Ϊ�յ����
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

//쳲�����
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

//������̨��
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

//�滻�ո�
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

//��ת������
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

//�ϲ��������������
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

//�ж�һ�����ǲ�������
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
//	//b��������,
//	if (h2 == NULL){
//		return true;
//	}
//	//b����, a��������
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
//	//b��������,
//	if (h2 == NULL){
//		return true;
//	}
//	//b����, a��������
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

//���������
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

#include <vector>
//void pMarix(vector<int> &ret, vector<vector<int> > matrix, int row, int col, int count){
//	int endRow = row - 1 - count;
//	int endCol = col - 1 - count;
//	//�� -> ��
//	int i = 0;
//	for (i = count; i <= endCol; ++i){
//		ret.push_back(matrix[count][i]);
//	}
//	//�� -> ��
//	if (count < endRow){
//		for (i = count + 1; i <= endRow; ++i){
//			ret.push_back(matrix[i][endCol]);
//		}
//	}
//	//�� -> ��
//	if (count < endRow && count < endCol){
//		for (i = endCol - 1; i > count; --i){
//			ret.push_back(matrix[endRow][i]);
//		}
//	}
//	//�� -> ��
//	if (count < endRow - 1 && count < endCol){
//		for (i = endRow - 1; i > count; --i){
//			ret.push_back(matrix[i][count]);
//		}
//	}
//}
//
//vector<int> PrintMatrix(vector<vector<int> > matrix) {
//	vector<int> ret;
//	if (matrix.size() == 0){
//		return ret;
//	}
//	int row = matrix.size();
//	int col = matrix[0].size();
//	int count = 0;
//	while (row > 2 * count && col > 2 * count){
//		pMarix(ret, matrix, row, col, count);
//		++count;
//	}
//	return ret;
//}

//˳ʱ���ӡ����
//void pMatrix(vector<int>& ret, vector<vector<int>> matrix, int row, int col, int count){
//	int endRow = row - 1 - count;
//	int endCol = col - 1 - count;
//	//�� -> ��
//	int i = 0;
//	for (i = count; i <= endCol; ++i){
//		ret.push_back(matrix[count][i]);
//	}
//	//�� -> ��
//	if (count < endRow){
//		for (i = count + 1; i <= endRow; ++i){
//			ret.push_back(matrix[i][endCol]);
//		}
//	}
//	//�� -> ��
//	if (count < endRow && count < endCol){
//		for (i = endCol - 1; i >= count; --i){
//			ret.push_back(matrix[endRow][i]);
//		}
//	}
//	if (count < endRow - 1 && count < endCol){
//		for (i = endRow - 1; i > count; --i){
//			ret.push_back(matrix[i][count]);
//		}
//	}
//}
//vector<int> PrintMatrix(vector<vector<int>> matrix) {
//	vector<int> ret;
//	int row = matrix.size();
//	int col = matrix[0].size();
//	if (row == 0 && col == 0){
//		return ret;
//	}
//	//Ȧ��
//	int count = 0;
//	while (row > 2 * count && col > 2 * count){
//		pMatrix(ret, matrix, row, col, count);
//		++count;
//	}
//	return ret;
//}
//int main(){
//	vector<int> a = { 1, 2, 3 };
//	vector<int> b = { 8, 9, 4 };
//	vector<int> c = { 7, 6, 5 };
//	vector<int> d;
//	//vector<vector<int> > matrix = { a, b, c };
//	vector<vector<int> > matrix = { d };
//	vector<int> ret = PrintMatrix(matrix);
//	return 0;
//}

//����min������ջ
//class Solution {
//public:
//	void push(int value) {
//		if (s1.empty() == 1){
//			s2.push(value);;
//		}
//		else{
//			int t = s2.top();
//			if (value < t){
//				s2.push(value);
//			}
//		}
//		s1.push(value);
//	}
//	void pop() {
//		int t = s2.top();
//		int p = s1.top();
//		if (t == p){
//			s2.pop();
//		}
//		s1.pop();
//	}
//	int top() {
//		return s1.top();
//	}
//	int min() {
//		return s2.top();
//	}
//	stack<int> s1;
//	//�����Сֵ
//	stack<int> s2;
//};

//ջ��ѹ��,��������
//bool IsPopOrder(vector<int> pushV, vector<int> popV) {
//	int len = pushV.size();
//	int i = 0;
//	int j = 0;
//	stack<int> s;
//	while (i < len && j < len){
//		//�����
//		if (pushV[i] != popV[j]){
//			s.push(pushV[i]);
//		}
//		else{
//			++j;
//		}
//		++i;
//	}
//	while (s.empty() != 1){
//		int top = s.top();
//		if (top != popV[j]){
//			return false;
//		}
//		++j;
//		s.pop();
//	}
//	return true;
//}


//�������Ĳ������
//vector<int> PrintFromTopToBottom(TreeNode* root) {
//	queue<TreeNode*> q;
//	vector<int> ret;
//	TreeNode* cur;
//	if (root == NULL){
//		return ret;
//	}
//	q.push(root);
//	//ret.push_back(root->val);
//	while (q.empty() != 1){
//		int count = q.size();
//		int i = 0;
//		for (i = 0; i < count; ++i){
//			cur = q.front();
//			q.pop();
//			ret.push_back(cur->val);
//			if (cur->left){
//				q.push(cur->left);
//			}
//			if (cur->right){
//				q.push(cur->right);
//			}
//		}
//	}
//	return ret;
//}



//bool vsBst(vector<int> s, int begin, int end){
//	int root = s[end];
//	int i = begin;
//	//Ѱ���������ı߽�
//	for (i = begin; i < end; ++i){
//		if (s[i] > root){
//			break;
//		}
//	}
//	int j = i;
//	for (; j < end; ++j){
//		if (s[j] < root){
//			return false;
//		}
//	}
//	bool left = true;
//	if (i > begin){
//		left = vsBst(s, begin, i - 1);
//	}
//	bool right = true;
//	if (i < end){
//		right = vsBst(s, i, end - 1);
//	}
//	return left && right;
//}
//
//bool VerifySquenceOfBST(vector<int> sequence) {
//	int len = sequence.size();
//	if (vsBst(sequence, 0, len - 1)){
//		return true;
//	}
//	else{
//		return false;
//	}
//}



//bool vsBst(vector<int> s, int begin, int end){
//	if (begin >= end){
//		return true;
//	}
//	int i = begin;
//	int root = s[end];
//	for (; i < end; ++i){
//		if (s[i] > root){
//			return false;;
//		}
//	}
//	return vsBst(s, begin, i - 1)
//		&& vsBst(s, i, end - 1);
//}
//
//bool VerifySquenceOfBST(vector<int> sequence) {
//	int len = sequence.size();
//	if (vsBst(sequence, 0, len - 1)){
//		return true;
//	}
//	else{
//		return false;
//	}
//}
//int main(){
//	vector<int> s = { 2, 4, 3};
//	if (VerifySquenceOfBST(s)){
//		cout << "yes" << endl;
//	}
//	return 0;
//}



//�������к�Ϊĳһֵ��·��
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//
//void findp(TreeNode* root, vector<vector<int>>& ret, int cur, int tar){
//	static vector<int> v;
//	static int count = 0;
//	cur += root->val;
//	v.push_back(root->val);
//	//��Ҷ�ӽڵ�, �Һ����
//	if (cur == tar && root->left == NULL && root->right == NULL){
//		ret.push_back(v);
//		++count;
//	}
//	if (root->left){
//		findp(root->left, ret, cur, tar);
//	}
//	if (root->right){
//		findp(root->right, ret, cur, tar);
//	}
//	cur -= root->val;
//	v.pop_back();
//}
//
//vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
//	vector<vector<int>> ret;
//	if (root == NULL){
//		return ret;
//	}
//	findp(root, ret, 0, expectNumber);
//	return ret;
//}
//int main(){
//	TreeNode* root = new TreeNode(1);
//	root->left = new TreeNode(2);
//	root->right = new TreeNode(3);
//	root->left->left = new TreeNode(1);
//
//	FindPath(root, 4);
//	return 0;
//}


//struct RandomListNode {
//	int label;
//	struct RandomListNode *next, *random;
//	RandomListNode(int x) :
//		label(x), next(NULL), random(NULL) {
//	}
//};
//
//RandomListNode* Clone(RandomListNode* pHead)
//{
//	RandomListNode* head = pHead;
//	while (head){
//		RandomListNode* next = head->next;
//		RandomListNode* newNode = new RandomListNode(head->label);
//		//��newNode���뵽headǰ��
//		head->next = newNode;
//		newNode->next = next;
//		//random��Ҫ����
//		//newNode->random = head->random;
//		head = next;
//	}
//	RandomListNode* cur = pHead;
//	//����random
//	while (cur && cur->next){
//		cur->next->random = cur->random ? cur->random->next : NULL;
//		cur = cur->next->next;
//	}
//	head = pHead->next;
//	while (head){
//		head->next = head->next ? head->next->next : NULL;
//		head = head->next;
//	}
//	return pHead->next;
//}
//
//int main(){
//	RandomListNode* root = new RandomListNode(1);
//	
//	root->next = new struct RandomListNode(2);
//	
//	root->next->next = new struct RandomListNode(3);
//	
//	root->next->next->next = new struct RandomListNode(4);
//
//	root->next->next->next->next = new struct RandomListNode(5);
//
//	root->random = root->next->next;
//	root->next->random = root->next->next->next->next;
//	root->next->next->random = NULL;
//	root->next->next->next->random = root->next;
//	root->next->next->next->next->random = NULL;
//	RandomListNode* ret = Clone(root);
//	return 0;
//}

//��������ĸ���
//RandomListNode* Clone(RandomListNode* pHead)
//{
//	if (pHead == NULL){
//		return NULL;
//	}
//	RandomListNode* cur = pHead;
//	RandomListNode* next;
//	while (cur){
//		//������һ���ڵ�
//		next = cur->next;
//		RandomListNode* newNode = new RandomListNode(cur->label);
//		//ƴ��
//		cur->next = newNode;
//		newNode->next = next;
//		cur = next;
//	}
//	//����random
//	cur = pHead;
//	while (cur){
//		cur->next->random = cur->random ? cur->random->next : NULL;
//		cur = cur->next->next;
//	}
//	//�ֿ�
//	cur = pHead;
//	RandomListNode* newHead = cur->next;
//	RandomListNode* newCur = newHead;
//	while (cur){
//		cur->next = cur->next->next;
//		newCur->next = newCur->next ? newCur->next->next : NULL;
//		cur = cur->next;
//		newCur = newCur->next;
//	}
//	return newHead;
//}

//������������˫������
//void _Convert(TreeNode* root, TreeNode** prev){
//	if (!root){
//		return;
//	}
//	_Convert(root->left, prev);
//	root->left = *prev;
//	if (*prev){
//		(*prev)->right = root;
//	}
//	*prev = root;
//	_Convert(root->right, prev);
//}
//TreeNode* Convert(TreeNode* pRootOfTree)
//{
//	TreeNode* prev = NULL;
//	TreeNode* head;
//	_Convert(pRootOfTree, &prev);
//	head = pRootOfTree;
//	while (head && head->left){
//
//		head = head->left;
//	}
//	return head;
//}
////
////
//void _convert(TreeNode* root, TreeNode** pPrev){
//	//�������
//	if (root->left){
//		_convert(root->left, pPrev);
//	}
//	//�ڴ˽����µ�����
//	root->left = *pPrev;
//	if (*pPrev != NULL){
//		(*pPrev)->right = root;
//	}
//	*pPrev = root;
//	if (root->right){
//		_convert(root->right, pPrev);
//	}
//}
//TreeNode* Convert(TreeNode* pRootOfTree)
//{
//	if (pRootOfTree == NULL){
//		return NULL;
//	}
//	TreeNode* prev = NULL;
//	_convert(pRootOfTree, &prev);
//	prev = pRootOfTree;
//	//�Ӹ��ҵ�����Ľڵ�
//	while (prev && prev->left){
//		prev = prev->left;
//	}
//	return prev;
//}

//�������к�Ϊĳһֵ��·��
//void findp(TreeNode* root, int tar, vector<vector<int>>& ret, int cur){
//	static vector<int> v;
//	//�ۼ�
//	cur += root->val;
//	//push
//	v.push_back(root->val);
//
//	if (root->left){
//		findp(root->left, tar, ret, cur);
//	}
//	if (root->right){
//		findp(root->right, tar, ret, cur);
//	}
//	//�ж��ǲ���Ҷ�ӽڵ��Һ����
//	if (cur == tar && root->left == NULL && root->right == NULL){
//		ret.push_back(v);
//	}
//	cur -= root->val;
//	v.pop_back();
//}
//vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
//	vector<vector<int>> ret;
//	if (root == NULL){
//		return ret;
//	}
//	findp(root, expectNumber, ret, 0);
//	return ret;
//}

//��������ĸ���
//RandomListNode* Clone(RandomListNode* pHead)
//{
//	if (pHead == NULL){
//		return NULL;
//	}
//	RandomListNode* cur = pHead;
//	RandomListNode* next;
//	while (cur){
//		//������һ���ڵ�
//		next = cur->next;
//		RandomListNode* newNode = new RandomListNode(cur->label);
//		//ƴ��
//		cur->next = newNode;
//		newNode->next = next;
//		cur = next;
//	}
//	//����random
//	cur = pHead;
//	while (cur){
//		cur->next->random = cur->random ? cur->random->next : NULL;
//		cur = cur->next->next;
//	}
//	//�ֿ�
//	cur = pHead;
//	RandomListNode* newHead = cur->next;
//	RandomListNode* newCur = newHead;
//	while (cur){
//		cur->next = cur->next->next;
//		newCur->next = newCur->next ? newCur->next->next : NULL;
//		cur = cur->next;
//		newCur = newCur->next;
//	}
//	return newHead;
//}
//

//������������˫������
//void _convert(TreeNode* root, TreeNode*& pPrev){
//	//�������
//	if (root->left){
//		_convert(root->left, pPrev);
//	}
//	//�ڴ˽����µ�����
//	root->left = pPrev;
//	if (pPrev != NULL){
//		pPrev->right = root;
//	}
//	pPrev = root;
//	if (root->right){
//		_convert(root->right, pPrev);
//	}
//}
//TreeNode* Convert(TreeNode* pRootOfTree)
//{
//	if (pRootOfTree == NULL){
//		return NULL;
//	}
//	TreeNode* prev = NULL;
//	_convert(pRootOfTree, prev);
//	prev = pRootOfTree;
//	//�Ӹ��ҵ�����Ľڵ�
//	while (prev && prev->left){
//		prev = prev->left;
//	}
//	return prev;
//}

//�ַ���������
//void _per(set<string>& set, string s, int begin, int len){
//	if (s[begin] == '\0'){
//		set.insert(s);
//	}
//	else{
//		int i = begin;
//		for (; i < len; ++i){
//			//��begin���κͺ����Ԫ�ؽ���
//			char tmp = s[i];
//			s[i] = s[begin];
//			s[begin] = tmp;
//			_per(set, s, begin + 1, len);
//			//������
//			tmp = s[i];
//			s[i] = s[begin];
//			s[begin] = tmp;
//		}
//	}
//}
//vector<string> Permutation(string str) {
//	vector<string> ret;
//	set<string> set;
//	int len = str.size();
//	if (len == 0){
//		return ret;
//	}
//	_per(set, str, 0, len);
//	for (const auto& e : set){
//		ret.push_back(e);
//	}
//	return ret;
//}

//�����г��ִ�������һ�������
//int MoreThanHalfNum_Solution(vector<int> numbers) {
//	map<int, int> m;
//	int count = 0;
//	int max = 0;
//	for (const auto& e : numbers){
//		++m[e];
//		if (m[e] > count){
//			max = e;
//			count = m[e];
//		}
//	}
//	if (2 * m[max] > numbers.size()){
//		return max;
//	}
//	else{
//		return 0;
//	}
//}


//���������������
//int FindGreatestSumOfSubArray(vector<int> array) {
//	int len = array.size();
//	if (len == 0){
//		return -1;
//	}
//	int sum = array[0];
//	int max = array[0];
//	for (int i = 1; i < len; ++i){
//		sum = sum > 0 ? sum + array[i] : array[i];
//		max = sum > max ? sum : max;
//	}
//	return max;
//}