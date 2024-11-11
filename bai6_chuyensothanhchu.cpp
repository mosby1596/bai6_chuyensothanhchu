#include <iostream>
#include<cmath>
using namespace std;
int main() {
	cout << "chuong trinh chuyen so thanh chu\n";
	int num;
	cout << "nhap so";
	cin >> num;
	if (num == 0) { cout << "khong\n"; }
	else if (num == 1) { cout << "mot\n"; }
	else if (num == 2) { cout << "hai\n"; }
	else if (num == 3) { cout << "ba\n"; }
	else if (num == 4) { cout << "bon\n"; }
	else if (num == 5) { cout << "nam\n"; }
	else if (num == 6) { cout << "sau\n"; }
	else if (num == 7) { cout << "bay\n"; }
	else if (num == 8) { cout << "tam\n"; }
	else if (num == 9) { cout << "chin\n"; }
	
	switch (num) {
	case 0:
		cout << "khong\n";
		break;
	case 1:
		cout << "mot\n";
		break;
	case 2:
		cout << "hai\n";
		break;
	case 3:
		cout << "ba\n";
		break;
	case 4:
		cout << "bon\n";
		break;
	case 5:
		cout << "nam\n";
		break;
	case 6:
		cout << "sau\n";
		break;
	case 7:
		cout << "bay\n";
		break;
	case 8:
		cout << "tam\n";
		break;
	case 9:
		cout << "chin\n";
		break;
		return 0;
	}
}
