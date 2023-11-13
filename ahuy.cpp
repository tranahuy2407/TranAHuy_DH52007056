
#include <iostream>
using namespace std;

bool kiemTraChinhPhuong(int n) {
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (n%i == 0) {
			s += i;
		}
	}
	if (s == n)
bool kiemTraHoanThien(int n) {
	if((int)sqrt(n)==sqrt(n))
		return true;
	return false;
}

int main() {
	int n;
	cout << "Nhap 1 so nguyen n";
	cin >> n;
	if (kiemTraChinhPhuong(n) == 1) {
		cout << n << " la so chinh phuong";
	}
	else {
		cout << n << " khong la so chinh phuong";
	}
	if (kiemTraHoanThien(n) == 1) {
		cout << n << " la so hoan thien";
	}
	else
		cout << n << " la so hoan thien";
	return 0;
}