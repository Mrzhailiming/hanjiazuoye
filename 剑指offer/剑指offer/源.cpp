#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <iostream>

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