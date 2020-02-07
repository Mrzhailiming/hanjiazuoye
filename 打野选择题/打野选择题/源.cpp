#include <iostream>
#include <stdio.h>
#include <vector>
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

//day7/1
//vector<int> sortArrayByParity(vector<int>& A) {
//	int end = A.size() - 1;
//	int begin = 0;
//	while (begin < end){
//		if (A[begin] % 2 == 0){
//			++begin;
//		}
//		if (A[end] % 2 == 1){
//			--end;
//		}
//		if (begin < end){
//			swap(A[end], A[begin]);
//		}
//	}
//	return A;
//}


//day7/2
//int pivotIndex(vector<int>& nums) {
//	int mid = 0;
//	int max = 0;
//	int len = nums.size();
//	int pos = len - 1;
//	for (; pos >= 0; --pos){
//		max += nums[pos];
//	}
//	pos = 0;
//	for (; pos < len; ++pos){
//		mid += nums[pos];
//		if ((mid - nums[pos]) * 2 == (max - nums[pos])){
//			return pos;
//		}
//	}
//	return -1;
//}


//
//day8/1
//vector<int> plusOne(vector<int>& digits) {
//	int len = digits.size();
//	int pos = len - 1;
//	while (pos >= 0){
//		if (digits[pos] == 9){
//			digits[pos] = 0;
//			--pos;
//		}
//		else{
//			++digits[pos];
//			return digits;
//		}
//	}
//	digits.push_back(0);
//	digits[0] = 1;
//	return digits;
//}


//day8/2
//int thirdMax(vector<int>& nums) {
//	int max = INT_MIN, mid = INT_MIN, min = INT_MIN;
//	int flag = 0;
//	int len = nums.size();
//	if (len == 1){
//		return nums[0];
//	}
//	if (len == 2){
//		return nums[0] > nums[1] ? nums[0] : nums[1];
//	}
//	while (len--){
//		if (nums[len] == INT_MIN){
//			flag = 1;
//		}
//		if (nums[len] > min && nums[len] != min &&
//			nums[len] != mid && nums[len] != max){
//			min = nums[len];
//			if (min > mid){
//				swap(min, mid);
//				if (mid > max){
//					swap(mid, max);
//				}
//			}
//		}
//	}
//	//数组没有INT_MIN
//	if (flag == 0){
//		if (min == INT_MIN){
//			return max;
//		}
//		else{
//			return min;
//		}
//	}
//	//数组中有INT_MIN
//	else{
//		if (mid == INT_MIN){
//			return max;
//		}
//		else{
//			return min;
//		}
//	}
//}

//day9/1
//vector<int> twoSum(vector<int>& nums, int target) {
//	vector<int> arr;
//	int len = nums.size();
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len; ++i){
//		for (j = i + 1; j < len; ++j){
//			if (nums[i] + nums[j] == target){
//				arr.push_back(i);
//				arr.push_back(j);
//				return arr;
//			}
//		}
//	}
//	return arr;
//}


//string addBinary(string a, string b) {
//	string res;
//	bool carry = false; //进位标志
//	if (a.size() > b.size())
//		a.swap(b);
//	int gap = b.size() - a.size();
//	for (int i = 0; i < gap; ++i) //将两个字符串长度相等化
//		a.insert(0, "0");
//	for (int i = a.size() - 1; i >= 0; --i)
//	{
//		if ((a[i] ^ b[i]) == 1) //0 1或者1 0
//			res.insert(0, carry == true ? "0" : "1");
//		else //0 0 或者 1 1
//		{
//			res.insert(res.begin(), carry == true ? '1' : '0');
//			carry = a[i] == '1' ? true : false;
//		}
//	}
//	if (carry) //加上最终的进位
//		res.insert(res.begin(), '1');
//	return res;
//}

//day9/2
//string addBinary(string a, string b) {
//	int alen = a.size();
//	int blen = b.size();
//	//让a最长
//	if (blen > alen){
//		swap(a, b);
//	}
//	//短的字符串前面补 '0'
//	int i = 0;
//	int count = blen > alen ? blen - alen : alen - blen;
//	for (i = 0; i < count; ++i){
//		b.insert(b.begin(), '0');
//	}
//	//存放相加后的字符串
//	string tmp;
//	//进位标志
//	int flag = 0;
//	for (i = a.size() - 1; i >= 0; --i){
//		//'1' '0' 或 '0' '1'
//		if ((a[i] ^ b[i]) == 1){
//			//如果上次有进位,则'1' 与 '1' 相加进位,本位为 '0'
//			tmp.insert(tmp.begin(), flag ? '0' : '1');
//		}
//		//'1' '1' 或 '0' '0'
//		else{
//			//如果上次有进位,则'1' 与 '1' + '1' 相加进位,本位为 '1'
//			//或者 '1' 与 '0' + '0' 相加, 本位为 '1'
//			tmp.insert(tmp.begin(), flag ? '1' : '0');
//			//在这里判断进位的情况
//			flag = a[i] == '1' ? 1 : 0;
//		}
//	}
//	if (flag){
//		tmp.insert(tmp.begin(), '1');
//	}
//	return tmp;
//}

//day10/1
//int myAtoi(string str) {
//	long int ret = 0;
//	int len = str.size();
//	//字符串为空
//	if (len == 0){
//		return 0;
//	}
//	int pos = 0;
//	//判断正负的标志
//	int flag = 0;
//	//找到第一个非空的字符
//	while (str[pos] == ' '){
//		++pos;
//	}
//	//判断第一个非空字符
//	//不为 -
//	if (str[pos] == '-'){
//		++pos;
//		flag = 1;
//	}
//	//不为 +
//	else if (str[pos] == '+'){
//		++pos;
//	}
//	//不为数字
//	else if (str[pos] < '0' || str[pos] > '9'){
//		return 0;
//	}
//	//正负号后跟的不是数字
//	if (str[pos] < '0' || str[pos] > '9'){
//		return 0;
//	}
//	//从第一个数字开始相加,加到不为数字为止
//	while (pos < len &&str[pos] - '0' >= 0 &&
//		str[pos] - '0' <= 9){
//		if (ret * 10 + str[pos] - '0' > INT_MAX){
//			if (flag){
//				return INT_MIN;
//			}
//			else{
//				return INT_MAX;
//			}
//		}
//		ret = ret * 10 + str[pos] - '0';
//		++pos;
//	}
//	if (flag){
//		return -ret;
//	}
//	else
//		return ret;
//}

//day10/2
//vector<int> searchRange(vector<int>& nums, int target) {
//	vector<int> arr = { -1, -1 };
//	int len = nums.size();
//	if (len == 0){
//		return arr;
//	}
//	if (len == 1 && nums[0] == target){
//		return arr = { 0, 0 };
//	}
//	int begin = 0;
//	int end = len - 1;
//	int mid = 0;
//	while (begin <= end){
//		mid = begin + (end - begin) / 2;
//		if (target < nums[mid]){
//			end = mid - 1;
//		}
//		else if (target > nums[mid]){
//			begin = mid + 1;
//		}
//		else{
//			begin = end = mid;
//			while (begin >= 0 && nums[begin] == target){
//				--begin;
//			}
//			while (end < len && nums[end] == target){
//				++end;
//			}
//			arr = { begin + 1, end };
//			return arr;
//		}
//	}
//	return arr;
//}


//day11/1
//bool isPalindrome(string s) {
//	int len = s.size();
//	string tmp;
//	int begin = 0;
//	int end = len - 1;
//	if (len == 0 || len == 1){
//		return true;
//	}
//	//把字母数字放到tmp中,并把大写转小写
//	while (begin < len){
//		char c = s[begin];
//		if ((c >= '0' && c <= '9')
//			|| (c >= 'a' && c <= 'z')){
//			tmp += c;
//		}
//		if (c >= 'A' && c <= 'Z'){
//			tmp += tolower(c);
//		}
//		++begin;
//	}
//	//比较
//	begin = 0;
//	end = tmp.size() - 1;
//	while (begin < end){
//		char left = tmp[begin++];
//		char right = tmp[end--];
//		if (left == right){
//			;
//		}
//		else{
//			return false;
//		}
//	}
//	return true;
//}

//day11/2
//int compress(vector<char>& chars) {
//	int len = chars.size();
//	if (len == 1){
//		return 1;
//	}
//	int pos = 0;
//	char cur = '0';
//	int count = 0;
//	int cut = 0;
//	int begin = 0;
//	//count有几位
//	int flag = 10;
//	int i = 1;
//	int newpos = 0;
//	while (pos < len){
//		cur = chars[pos];
//		//记录开始的位置
//		begin = pos;
//		//计数
//		while (pos < len && cur == chars[pos]){
//			++count;
//			++pos;
//			//count发生进位,i+1
//			if (count >= flag){
//				flag *= 10;
//				++i;
//			}
//		}
//		//count > 1 才需要压缩
//		if (count > 1){
//			chars[newpos] = cur;
//			//压缩的个数
//			cut += count - i - 1;
//			//如果i > 1
//			if (i > 1){
//				int j = 0;
//				for (j = 0; j < i; ++j){
//					int x = i - j - 1;
//					int y = 1;
//					while (x--){
//						y *= 10;
//					}
//					chars[newpos + j + 1] =
//						(count / y) % 10 + '0';
//				}
//			}
//			else{
//				chars[newpos + 1] = count % 10 + '0';
//			}
//			newpos += (i + 1);
//		}
//		//count = 1
//		else{
//			chars[newpos] = cur;
//			newpos += 1;
//		}
//		
//		i = 1;
//		count = 0;
//		flag = 10;
//	}
//	return len - cut;
//}


//day12/1
//int findUnsortedSubarray(vector<int>& nums) {
//	int len = nums.size();
//	int begin = 0;
//	int flag = 0;
//	int end = len - 1;
//	//需要排序区间的最大最小值
//	int max = INT_MIN, min = INT_MAX;
//	//排序的区间
//	int pos1 = 0, pos2 = 0;
//	while (begin < len - 1){
//		//寻找需要排序区间的最大最小值
//		//两个相邻的数是降序排列,就需要判断是不是最大或最小
//		if (nums[begin] > nums[begin + 1]){
//			if (max < nums[begin]){
//				max = nums[begin];
//			}
//			if (min > nums[begin + 1]){
//				min = nums[begin + 1];
//			}
//			flag = 1;
//		}
//		++begin;
//	}
//	//如果不需要排序
//	if (flag == 0){
//		return 0;
//	}
//	begin = 0;
//	//寻找第一个大于 需要排序区间最小值 的位置
//	while (begin < len){
//		if (nums[begin] > min){
//			pos1 = begin;
//			break;
//		}
//		++begin;
//	}
//	//寻找第一个小于 需要排序区间最大值 的位置
//	while (end >= 0){
//		if (nums[end] < max){
//			pos2 = end;
//			break;
//		}
//		--end;
//	}
//	return pos2 - pos1 + 1;
//}








int main(){
	vector<int> nums = { 2, 6, 4, 8, 10, 9, 15 };
	findUnsortedSubarray(nums);



	/*vector<char> chars = {'a', 'a', 'a', 'a','b','c','d' };
	compress(chars);*/
	/*string str("A man, a plan, a canal: Panama");
	isPalindrome(str);*/
	/*vector<int> nums = { 1, 4 };
	searchRange(nums, 4);*/
	/*string a("  000000012121");
	myAtoi(a);*/
	//string a("42");
	//string b("1");
	//addBinary(a, b);
	/*vector<int> nums = { 2, 2, 3, 1};
	int ret = thirdMax(nums);
	cout << ret << endl;*/
	/*string name("plpkoh");
	string typed("plppkkh");
	int n = 2;
	n += n -= n * n;*/
	//isLongPressedName(name, typed);
	return 0;
}
