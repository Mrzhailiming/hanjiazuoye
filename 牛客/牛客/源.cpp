#include <iostream> 
using namespace std;
int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
void fun(int *pa, int n);
int main()
{
	int m = 10;
	fun(a, m);
	cout << a[6] << endl;
}
void fun(int *pa, int n)
{
	for (int i = n - 1; i > 0; i--)
		*(pa + 6) += pa[i];
}