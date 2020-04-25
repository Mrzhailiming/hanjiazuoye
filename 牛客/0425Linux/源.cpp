#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
//
//bool isPrime(int num){
//	int i = 2;
//	for (int i = 2; i < num; ++i){
//		if (num % i == 0){
//			//��������
//			return false;
//		}
//	}
//	return true;
//}
//bool lowestIsOne(int num){
//	if (num % 10 == 1){
//		return true;
//	}
//	else{
//		return false;
//	}
//}
//void fun(int n){
//	int i = 11;
//	for (i = 11; i < n; ++i){
//		if (isPrime(i)){
//			//������,�����λΪ1
//			if (lowestIsOne(i)){
//				cout << i << " ";
//			}
//		}
//	}
//	cout << endl;
//}
//int main(){
//	/*int n = -1;
//	while (cin >> n){
//	fun(n);
//	}*/
//	return 0;
//}

string change(string number) {
	// write code here
	string tmpLeft;
	string tmpRight;
	int len = number.size();
	int begin = 0;
	int end = len - 1;
	while (begin < end){
		//����
		while (begin < end && (number[begin] - '0') % 2 != 0){
			tmpLeft += number[begin];
			++begin;
		}
		int ret = (number[end] - '0') % 2;
		while (begin < end && (number[end] - '0') % 2 != 0){
			tmpRight.insert(tmpRight.begin(), number[end]);
			--end;
		}
		//ż��,��ת
		if (begin < end){
			tmpLeft += number[end];
			tmpRight.insert(tmpRight.begin(), number[begin]);
			--end;
			++begin;
		}
		//�����ǳ��������������
		if (begin == end){
			tmpLeft += number[begin];
		}
	}
	return tmpLeft + tmpRight;
}

int main(){
	string str;
	while (cin >> str){
		cout << change(str) << endl;
	}
	
	return 0;
}