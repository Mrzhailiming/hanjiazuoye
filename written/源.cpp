#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//
//int fun(){
//	vector<vector<int>> vv;
//	int n;
//	cin >> n;
//	int i = 0;
//	for (; i < n; ++i){
//		vector<int> v;
//		char tmp[100] = { 0 };
//		cin >> tmp;
//		char* str = strtok(tmp, ",");
//		while (str != nullptr){
//			v.push_back(atoi(str));
//			str = strtok(NULL, ",");
//		}
//		vv.push_back(v);
//	}
//	i = 1;
//	int count = 1;
//	for (; i < n; ++i){
//		if (vv[0][1] > vv[i][0]){
//			++count;
//		}
//		
//	}
//	i = 0;
//	for (; i < n - 1; ++i){
//		int j = i + 1;
//		for (; j < n; ++j){
//			if (vv[i][1] <= vv[j][0]){
//				count--;
//				break;
//			}
//		}
//	}
//	return count;
//}
//
//int fun(){
//	int n, m, p;
//	vector<int> v;
//	int x;
//	cin >> n >> m >> p;
//	int i = 0;
//	for (; i < p; ++i){
//		int tmp;
//		cin >> tmp;
//		v.push_back(tmp);
//	}
//	cin >> x;
//	//保存各个海豚的寿命
//	vector<int> num;
//	//记录生宝宝的nianfn
//	int dead = 0;
//	num.resize(n, 0);
//		//从第一年到第xnian
//		i = 0;
//		for (; i < x; ++i){
//			//遍历每一个海豚, 它的年龄 >= 1 且和生宝宝的年份相符合
//			int j = 0;
//			//没经过一次循环, len可能会增加
//			int len = num.size();
//			for (; j < len; ++j){
//				++num[j];
//				//死亡的
//				if (num[j] != -1 && num[j] > m){
//					num[j] = -1;
//					++dead;
//				}
//				else if (num[j] >= 1){
//					//年龄大于一, 遍历生娃的年龄集合 是否相符合
//					for (auto& e : v){
//						if (num[j] == e){
//							num.push_back(0);
//							break;
//						}
//					}
//				}
//				//每个海豚的年龄加一岁
//				
//			}
//		}
//	return num.size() - dead;
//}



int fun(){
	int n, m, p;
	vector<int> v;
	int x;
	cin >> n >> m >> p;
	int i = 0;
	for (; i < p; ++i){
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	cin >> x;
	//保存各个海豚的寿命
	vector<int> num;
	//记录生宝宝的nianfn
	int dead = 0;
	num.resize(n, 0);
	//从第一年到第xnian
	i = 0;
	for (; i < x; ++i){
		//遍历每一个海豚, 它的年龄 >= 1 且和生宝宝的年份相符合
		int j = 0;
		//没经过一次循环, len可能会增加
		int len = num.size();
		for (; j < len; ++j){
			++num[j];
			if (num[j] >= 1 && num[j] <= m){
				//年龄大于一, 遍历生娃的年龄集合 是否相符合
				for (auto& e : v){
					if (num[j] == e){
						num.push_back(0);
						break;
					}
				}
			}
		}
	}
	long count = 0;
	for (auto e : num){
		if (e <= m){
			count++;
		}
	}
	return count;
}
int main(){
	cout << "--" << endl;
	cout << fun() << endl;;
	return 0;
}

//从第一年到第xnian
i = 0;
for (; i < x; ++i){
	//遍历每一个海豚, 它的年龄 >= 1 且和生宝宝的年份相符合
	long j = 0;
	//没经过一次循环, len可能会增加
	long len = num.size();
	for (; j < len; ++j){
		//每个海豚的年龄加一岁
		++num[j];
		//死亡的
		if (num[j] != -1 && num[j] > m){
			num[j] = -1;
			++dead;
		}
		else if (num[j] >= 1){
			//年龄大于一, 遍历生娃的年龄集合 是否相符合
			for (auto& e : v){
				if (num[j] == e){
					num.push_back(0);
					break;
				}
			}
		}

	}
}
return num.size() - dead;