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


bool isLongPressedName(string name, string typed) {
	int nlen = name.size() - 1;
	int tlen = typed.size() - 1;
	while (nlen > 0 && tlen > 0){
		//如果name中又连续的字母,则连续字母的第一个字母只需要比较一次
		//不连续的情况
		if (name[nlen] != name[nlen - 1]){
			if (name[nlen] != typed[tlen]){
				return false;
			}
			while (name[nlen] == typed[tlen] && tlen > 0){
				--tlen;
			}
			--nlen;
		}
		//连续的情况
		else{
			if (name[nlen] != typed[tlen]){
				return false;
			}
			else{
				--tlen;
				--nlen;
			}

		}

	}
	//name第一个字母与typed剩下的字母比较
	while (name[nlen] == typed[tlen] && tlen >= 0){
		--tlen;
	}
	if (tlen > 0){
		return false;
	}
	else{
		return true;
	}
}

int main(){
	string name("alex");
	string typed("aaleex");
	isLongPressedName(name, typed);
	return 0;
}
