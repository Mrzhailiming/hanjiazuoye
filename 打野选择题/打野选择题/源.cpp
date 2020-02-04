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








int main(){

	
	return 0;
}
