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
//	//����������������
//	vector<int> num;
//	//��¼��������nianfn
//	int dead = 0;
//	num.resize(n, 0);
//		//�ӵ�һ�굽��xnian
//		i = 0;
//		for (; i < x; ++i){
//			//����ÿһ������, �������� >= 1 �Һ�����������������
//			int j = 0;
//			//û����һ��ѭ��, len���ܻ�����
//			int len = num.size();
//			for (; j < len; ++j){
//				++num[j];
//				//������
//				if (num[j] != -1 && num[j] > m){
//					num[j] = -1;
//					++dead;
//				}
//				else if (num[j] >= 1){
//					//�������һ, �������޵����伯�� �Ƿ������
//					for (auto& e : v){
//						if (num[j] == e){
//							num.push_back(0);
//							break;
//						}
//					}
//				}
//				//ÿ������������һ��
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
	//����������������
	vector<int> num;
	//��¼��������nianfn
	int dead = 0;
	num.resize(n, 0);
	//�ӵ�һ�굽��xnian
	i = 0;
	for (; i < x; ++i){
		//����ÿһ������, �������� >= 1 �Һ�����������������
		int j = 0;
		//û����һ��ѭ��, len���ܻ�����
		int len = num.size();
		for (; j < len; ++j){
			++num[j];
			if (num[j] >= 1 && num[j] <= m){
				//�������һ, �������޵����伯�� �Ƿ������
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

//�ӵ�һ�굽��xnian
i = 0;
for (; i < x; ++i){
	//����ÿһ������, �������� >= 1 �Һ�����������������
	long j = 0;
	//û����һ��ѭ��, len���ܻ�����
	long len = num.size();
	for (; j < len; ++j){
		//ÿ������������һ��
		++num[j];
		//������
		if (num[j] != -1 && num[j] > m){
			num[j] = -1;
			++dead;
		}
		else if (num[j] >= 1){
			//�������һ, �������޵����伯�� �Ƿ������
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