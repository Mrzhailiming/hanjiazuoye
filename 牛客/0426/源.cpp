//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <queue>
//#include <map>
//using namespace std;
//
//enum{
//	PUSH,
//	TOP,
//	POP,
//	SIZE,
//	CLEAR
//};
//vector<string> v = { "PUSH", "TOP", "POP", "SIZE", "CLEAR" };
//
//void QueFun(int count){
//	queue<int> q;
//	string tmp;
//	while (count--){
//		cin >> tmp;
//		if (tmp == v[PUSH]){
//			int val = 0;
//			cin >> val;
//			q.push(val);
//		}
//		else if (tmp == v[TOP]){
//			if (q.size() > 0){
//				cout << q.front() << endl;
//			}
//			else{
//				cout << "-1" << endl;
//			}
//		}
//		else if (tmp == v[POP]){
//			if (q.size() > 0){
//				q.pop();
//			}
//			else{
//				cout << "-1" << endl;
//			}
//		}
//		else if (tmp == v[SIZE]){
//			cout << q.size() << endl;
//		}
//		else{
//			q = queue<int>();
//		}
//
//	}
//}
//
//int main(){
//	int n = 0;
//	cin >> n;
//	while (n--){
//		int count = 0;
//		cin >> count;
//		QueFun(count);
//	}
//	return 0;
//}

//
//class Queue{
//public:
//	stack<int> left;
//	stack<int> right;
//	void add(){
//		int val = 0;
//		cin >> val;
//		left.push(val);
//	}
//	void poll(){
//		if (right.size() > 0){
//			right.pop();
//		}
//		else {
//			while (left.size() > 0){
//				int tmp = left.top();
//				right.push(tmp);
//				left.pop();
//			}
//			poll();
//		}
//	}
//	void peek(){
//		if (right.size() > 0){
//			cout << right.top() << endl;
//		}
//		else {
//			while (left.size() > 0){
//				int tmp = left.top();
//				right.push(tmp);
//				left.pop();
//			}
//			cout << right.top() << endl;
//		}
//	}
//};
//
//#include <iostream>
//#include <string>
//#include <stack>
//#include <vector>
//using namespace std;
//
//enum{
//	ADD,
//	POLL,
//	PEEK
//};
//
//vector<string> v = { "add", "poll", "peek" };
//
//class Queue{
//public:
//	Queue(){
//		topNum = 0;
//	}
//	stack<int> left;
//	stack<int> right;
//	int topNum;
//	void add(){
//		int val = 0;
//		cin >> val;
//		if (left.size() == 0 && right.size() == 0){
//			topNum = val;
//		}
//		left.push(val);
//	}
//	void poll(){
//		if (right.size() > 0){
//			right.pop();
//		}
//		else {
//			while (left.size() > 0){
//				int tmp = left.top();
//				right.push(tmp);
//				left.pop();
//			}
//			poll();
//		}
//		topNum = right.top();
//	}
//	void peek(){
//		cout << topNum << endl;
//	}
//};
//
//int main(){
//	Queue q;
//	int n = 0;
//	cin >> n;
//	while (n--){
//		string tmp;
//		cin >> tmp;
//		if (tmp == v[ADD]){
//			q.add();
//		}
//		else if (tmp == v[POLL]){
//			q.poll();
//		}
//		else{
//			q.peek();
//		}
//	}
//	return 0;
//}

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void hasGrand(int x, int k){
	int kMinNum = 1, kMaxNum = 1;
	if (k == 1){
		//x在第一层的情况
		if (x != 1){
			cout << 1 << endl;
		}
		else{
			cout << -1 << endl;
		}
	}
	else{
		k--;
		while (k--){
			kMinNum = kMinNum * 2;
			kMaxNum = kMaxNum * 2 + 1;
		}
		x /= 2;
		while (x > 0){
			if (x >= kMinNum && x <= kMaxNum){
				cout << x << endl;
				break;
			}
			x /= 2;
		}
		if (x == 0){
			cout << -1 << endl;
		}
	}
}

int main(){
	int x = 0, k = 0;
	int n = 0;
	cin >> n;
	while (n--){
		cin >> x;
		cin >> k;
		hasGrand(x, k);
	}
	return 0;
}