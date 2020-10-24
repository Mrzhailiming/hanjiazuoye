#include <iostream>
#include <string>
using namespace std;

//��¼�����е�Ԫ�ظ���
int num = 0;
int intErrorCount = 0;
int outErrorCount = 0;
int beginIndex = 0;
int endIndex = 0;

//���
void addQueue(char* arr, int n){
	char c;
	cin >> c;
	//��
	if(num >= n - 1){
		++intErrorCount;
	}
	else{
		arr[endIndex] = c;
		endIndex = (endIndex + 1) % n;
		++num;
	}
}

//����
void outQueue(char* arr, int n){
	//��
	if(num == 0){
		++outErrorCount;
	}
	else{
		beginIndex = (beginIndex + 1) % n;
		--num;
	}
}

//��ӡ
void PrintfQueue(char* arr, int n){
	cout << intErrorCount << endl;
	cout << outErrorCount << endl;
	if(num == 0){
		cout << "EMPTY" << endl;
	}
	else{
		while(num--){
			cout << arr[beginIndex];
			beginIndex = (beginIndex + 1) % n;
		}
		cout << endl;
	}
}


int main(){
	string p = "P";
	string d = "D";
	string e = "END";
	int n = 0;
	cin >> n;
	char* arr = new char[n];
	string s;
	while(cin >> s){
		if(s == p){
			addQueue(arr, n);
		}
		else if(s == d){
			outQueue(arr, n);
		}
		else {
			PrintfQueue(arr, n);
		}
	}
	delete arr;
	return 0;
}