#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#if 0
//
int day[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 10, 31, 30, 31 };


//����2�¼�һ��
int LeapYear(int year){
	if (year % 4 == 0 && year % 100 != 0){
		return 1;
	}
	if (year % 400 == 0){
		return 1;
	}
	return 0;
}
//��������1Ԫ(1�ͱ�������)
int primeMonth(int month){
	if (month == 1){
		return 2;
	}
	int i = 2;
	for (i = 2; i < month; ++i){
		if (month % i == 0){
			//��������
			return 2;
		}
	}
	return 1;
}

//��һ������������Ǯ
int MonthMoney(int BeginMonth, int BeginDay
	, int EndDay){
	int retMonthMoney = 0;
	retMonthMoney = primeMonth(BeginMonth) * (EndDay - BeginDay + 1);
	return retMonthMoney;
}
//ͬһ����������Ǯ
int YearMoney(int  BeginYear, int BeginMonth, int BeginDay
	, int EndMonth, int EndDay){
	int retOneYearMoney = 0;
	while (BeginMonth <= EndMonth){
		if (BeginMonth > EndMonth){
			return retOneYearMoney;
		}
		//ͬһ��
		else if (BeginMonth == EndMonth){
			retOneYearMoney += MonthMoney(BeginMonth, BeginDay, EndDay);
			BeginMonth++;
		}
		//����һ����
		else{
			int leapDay = day[BeginMonth];
			//����,2�µ����
			if (BeginMonth == 2){
				leapDay = day[2] + LeapYear(BeginYear);
			}
			retOneYearMoney += MonthMoney(BeginMonth, BeginDay, leapDay);
			BeginMonth++;
			BeginDay = 1;
		}
	}
	return retOneYearMoney;
}

int totalMoney(int  BeginYear, int BeginMonth, int BeginDay
	,int EndYear,int EndMonth,int EndDay){
	int retMoney = 0;
	//�ж������ǲ�������,�ǲ���2����������
	while (BeginYear <= EndYear){
		//��ʼ����ڽ�����
		if (BeginYear > EndYear){
			return retMoney;
		}
		//��ͬһ��
		else if (BeginYear == EndYear){
			retMoney += YearMoney(BeginYear, BeginMonth, BeginDay, EndMonth, EndDay);
			BeginYear++;
		}
		//����ͬһ��
		else{
			retMoney += YearMoney(BeginYear, BeginMonth, BeginDay, 12, 31);
			BeginYear++;
			BeginMonth = 1;
			BeginDay = 1;
		}
		
	}
	return retMoney;
}

void testleap(){
	int year = 0;
	while (cin >> year){
		cout << LeapYear(year) << "nian" << endl;
	}
}
void testPrime(){
	int month = 0;
	while (cin >> month){
		cout << primeMonth(month) << "Ԫ" << endl;
	}
}
void test(){
	int BeginYear, BeginMonth, BeginDay;
	int EndYear, EndMonth, EndDay;
	while (cin >> BeginYear >> BeginMonth >> BeginDay &&
		cin >> EndYear >> EndMonth >> EndDay){
		int ret = totalMoney(BeginYear, BeginMonth, BeginDay, EndYear, EndMonth, EndDay);
		cout << ret << endl;
	}
}
int main(){
	testleap();
	//testPrime();
	//test();
	return 0;
}

#endif


unsigned long long fiboNum(int n){
	unsigned long long pre = 1;
	unsigned long long next = 2;
	if (n < 3){
		return n;
	}
	int i = 3;
	unsigned long long cur;
	for (i = 3; i <= n; ++i){
		cur = pre + next;
		pre = next;
		next = cur;
	}
	if (cur < 0xf4020){
		return cur;
	}
	else{
		int i = 0;
		unsigned long long lastSix = 0;
		/*for (i = 0; i < 20; ++i){
			lastSix = (lastSix < i) | 1;
			}*/
		lastSix = lastSix | 0xf4020;
		cur = cur & lastSix;
		return cur;
	}
}

int main(){
	int n = 0;
	while (cin >> n){
		unsigned long long ret = fiboNum(n);
		cout << "��" << ret << endl;
	}
	return 0;
}