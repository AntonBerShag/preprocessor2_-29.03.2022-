#include <iostream>
using namespace std;

//#define PI 3.14


#ifndef PI
#define PI 3
#else
#define E 2.72
#endif 


#if PI > 5
const int N = 10;
#elif 15 > 10
const int N = 15;
#else
const int N = 5;
#endif

#if 1 > 5
int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10, m = 5;

	if (n > m)
		cout << 1 << endl;
	else
		if (n < m)
			cout << -1 << endl;
		else
			cout << 0 << endl;

	return 0;
}
#else
int main() {
	setlocale(LC_ALL, "Russian");

	#define M 11
	#ifdef M
	cout << "M существует\n";
	#else
	#error "M должно существовать!"
	#endif

	return 0;
}
#endif 