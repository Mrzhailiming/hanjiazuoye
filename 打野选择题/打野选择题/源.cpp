#include <iostream>
#include <stdio.h>
using namespace std;


//day2/1
//class Solution {
//public:
//	int removeElement(vector<int>& nums, int val) {
//		int len = nums.size();
//		int pos = 0;
//		while (pos < len) {
//			if (nums[pos] == val)
//				nums[pos] = nums[--len];
//			else
//				++pos;
//		}
//
//		return len;
//	}
//};


//day2/2
//int searchInsert(vector<int>& nums, int target) {
//	int len = nums.size();
//	int i = 0;
//	while (i < len){
//		if (nums[i] == target){
//			return i;
//		}
//		if (nums[0] > target){
//			return 0;
//		}
//		if (nums[i] > target && nums[i - 1] < target){
//			return i;
//		}
//		++i;
//	}
//	return len;
//}

//day3/1
//bool canConstruct(string ransomNote, string magazine) {
//	if (ransomNote.size() > magazine.size()){
//		return false;
//	}
//	int str[256] = { 0 };
//	int i = 0;
//	//遍历magazine
//	while (i < magazine.size()){
//		++str[magazine[i++]];
//	}
//	//遍历ransonNote
//	i = 0;
//	while (i < ransomNote.size()){
//		if (str[ransomNote[i]] == 0){
//			return false;
//		}
//		//一个字母出现多次
//		else{
//			--str[ransomNote[i]];
//		}
//		++i;
//	}
//	return true;
//}

//day3/2
//bool isPalindrome(int x) {
//	if (x < 0){
//		return false;
//	}
//	if (x < 10){
//		return true;
//	}
//	size_t tmp = 0;
//	int i = x;
//	for (; i; i /= 10){
//		tmp = (tmp * 10) + i % 10;
//	}
//	if (tmp == x){
//		return true;
//	}
//	return false;
//}



//day4/1
//int lengthOfLastWord(string s) {
//	int pos = s.size() - 1;
//	int i = 0;
//	int count = 0;
//	int prev = 0;
//	int cur = 0;
//	while (i <= pos){
//		if (s[i] != ' '){
//			while (s[i] != ' ' && i <= pos){
//				++count;
//				++i;
//			}
//			prev = cur;
//			cur = count;
//			count = 0;
//		}
//		++i;
//	}
//	return cur;
//}

//day4/2
//void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//	int a = m - 1;
//	int b = n - 1;
//	while (a >= 0 && b >= 0){
//		//从后往前排
//		if (nums1[a] >= nums2[b]){
//			nums1[a + b + 1] = nums1[a];
//			--a;
//		}
//		else if (nums1[a] < nums2[b]){
//			nums1[a + b + 1] = nums2[b];
//			--b;
//		}
//	}
//	while (b >= 0){
//		nums1[b] = nums2[b];
//		--b;
//	}
//}


//day5/1
//bool containsDuplicate(vector<int>& nums) {
//	// int arr[1200000005] = { 0 };
//	// int arr2[1200000005] = { 0 };
//	// int len = nums.size();
//	// int i = 0;
//	// while(i < len){
//	//     if(nums[i] < 0){
//	//         if(++arr2[-nums[i++]] > 1){
//	//             return true;
//	//         }
//	//     }
//	//     else if(++arr[nums[i++]] > 1){
//	//         return true;
//	//     }
//	// }
//	// return false;
//	map<int, int> map;
//	for (int i = 0; i < nums.size(); i++)
//	if (map.count(nums[i]) != NULL)
//		return true;
//	else
//		map[nums[i]] += 1;
//	return false;
//}

//day5/2
//bool isLongPressedName(string name, string typed) {
//	int nlen = name.size();
//	int tlen = typed.size();
//	if (nlen > tlen){
//		return false;
//	}
//	int pos1 = 0;
//	int pos2 = 0;
//	while (pos1 < nlen && pos2 < tlen){
//		if (name[pos1] != typed[pos2]){
//			return false;
//		}
//		//比较最后一个字母时,跳出
//		if (pos1 + 1 == nlen){
//			break;
//		}
//		//name中字母连续的情况
//		if (name[pos1] == name[pos1 + 1]){
//			if (name[pos1] == typed[pos2]){
//				++pos1;
//				++pos2;
//			}
//			else{
//				return false;
//			}
//		}
//		//name中字母不连续的情况
//		else{
//			while (name[pos1] == typed[pos2]){
//				++pos2;
//			}
//			++pos1;
//		}
//	}
//	//比较name最后一个字母
//	if (name[pos1] == typed[pos2]){
//		return true;
//	}
//	else{
//		return false;
//	}
//
//}

//day6/1
//vector<int> sortedSquares(vector<int>& A) {
//
//	int arr1[10000] = { 0 };
//	int arr2[10000] = { 0 };
//	int len = A.size();
//	int pos1 = 0, pos2 = 0;
//	//arr1降序排列
//	//arr2升序排列
//	while (len--){
//		if (A[len] > 0){
//			arr1[pos1++] = A[len] * A[len];
//		}
//		else{
//			arr2[pos2++] = A[len] * A[len];
//		}
//	}
//	--pos1;
//	--pos2;
//	int i = 0;
//	int pos = 0;
//	//
//	while (i <= pos2 && pos1 >= 0){
//		if (arr1[pos1] > arr2[i]){
//			A[pos++] = arr2[i++];
//		}
//		else{
//			A[pos++] = arr1[pos1--];
//		}
//	}
//	while (i <= pos2){
//		A[pos++] = arr2[i++];
//	}
//	while (pos1 >= 0){
//		A[pos++] = arr1[pos1--];
//	}
//	return A;
//}

//day6/2
//string reverseOnlyLetters(string S) {
//	int end = S.size() - 1;
//	int begin = 0;
//	while (begin < end){
//		while (begin < end && S[begin] < 'A' || (S[begin] > 'Z' &&
//			S[begin] < 'a') || S[begin] > 'z'){
//			++begin;
//		}
//		while (begin < end && S[end] < 'A' || (S[end] > 'Z' &&
//			S[end] < 'a') || S[end] > 'z'){
//			--end;
//		}
//		if (begin < end){
//			swap(S[begin], S[end]);
//			--end;
//			++begin;
//		}
//
//	}
//	return S;
//}

int main(){
	string name("plpkoh");
	string typed("plppkkh");
	int n = 2;
	n += n -= n * n;
	//isLongPressedName(name, typed);
	return 0;
}
