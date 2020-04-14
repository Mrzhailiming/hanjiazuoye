#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#if 0
//
int day[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 10, 31, 30, 31 };


//闰年2月加一天
int LeapYear(int year){
	if (year % 4 == 0 && year % 100 != 0){
		return 1;
	}
	if (year % 400 == 0){
		return 1;
	}
	return 0;
}
//素数月挣1元(1和本身整除)
int primeMonth(int month){
	if (month == 1){
		return 2;
	}
	int i = 2;
	for (i = 2; i < month; ++i){
		if (month % i == 0){
			//不是素数
			return 2;
		}
	}
	return 1;
}

//这一个月能挣多少钱
int MonthMoney(int BeginMonth, int BeginDay
	, int EndDay){
	int retMonthMoney = 0;
	retMonthMoney = primeMonth(BeginMonth) * (EndDay - BeginDay + 1);
	return retMonthMoney;
}
//同一年能挣多少钱
int YearMoney(int  BeginYear, int BeginMonth, int BeginDay
	, int EndMonth, int EndDay){
	int retOneYearMoney = 0;
	while (BeginMonth <= EndMonth){
		if (BeginMonth > EndMonth){
			return retOneYearMoney;
		}
		//同一月
		else if (BeginMonth == EndMonth){
			retOneYearMoney += MonthMoney(BeginMonth, BeginDay, EndDay);
			BeginMonth++;
		}
		//不在一个月
		else{
			int leapDay = day[BeginMonth];
			//闰年,2月的情况
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
	//判断月数是不是素数,是不是2月且是闰年
	while (BeginYear <= EndYear){
		//开始年大于结束年
		if (BeginYear > EndYear){
			return retMoney;
		}
		//是同一年
		else if (BeginYear == EndYear){
			retMoney += YearMoney(BeginYear, BeginMonth, BeginDay, EndMonth, EndDay);
			BeginYear++;
		}
		//不是同一年
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
		cout << primeMonth(month) << "元" << endl;
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



int main(){
	
	return 0;
}