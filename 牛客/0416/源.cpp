#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void PrintNum(int n){
	vector<int> v;
	v.push_back(0);
	while (n--){
		//±éÀú
		vector<int> tmp;
		for (auto& one : v){
			if (one > 0){
				tmp.push_back(0);
			}
			++one;
		}
		for (auto& e : tmp){
			v.push_back(e);
		}
	}
	cout << v.size() << endl;
}

int main(){
	int n;
	while (cin >> n){
		PrintNum(n);
	}
	return 0;
}