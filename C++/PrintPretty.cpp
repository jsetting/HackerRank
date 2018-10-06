#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
		cout << resetiosflags(ios::uppercase);
		cout << setiosflags(ios::showbase) << hex << left << (long)A << endl;
		cout << resetiosflags(ios::showbase);

		cout << setprecision(2) << setw(0xf) << right << setfill('_');
		cout << setiosflags(ios_base::fixed | ios::showpos) << B << endl;
		cout << resetiosflags(ios_base::fixed | ios::showpos);

		cout << setiosflags(ios_base::scientific | ios::uppercase) << setprecision(9) << C;
		cout << resetiosflags(ios_base::scientific | ios::uppercase) << endl;
	}
	return 0;
}
