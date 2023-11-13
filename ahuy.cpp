
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
	return 0;
}