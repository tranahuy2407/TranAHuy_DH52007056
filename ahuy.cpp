
#include <iostream>
using namespace std;
bool kiemTraHoanThien(int n) {
	if((int)sqrt(n)==sqrt(n))
		return true;
	return false;
}

int main() {
	int n;
	cout << "Nhap 1 so nguyen n";
	cin >> n;
	if (kiemTraHoanThien(n) == 1) {
		cout << n << " la so hoan thien";
	}
	else
		cout << n << " la so hoan thien";
	return 0;
}