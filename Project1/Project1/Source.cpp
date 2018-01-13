#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand(unsigned(time(0)));
	/*int cube, step;
	do {
		cube = 1 + rand() % 6;
		cout << ++step <<", "<< cube << endl;
	} while (cube != 2 && cube!=5);

	int cube1, cube2, step=0;
	do {
		cube1 = 1 + rand() % 6;
		cube2 = 1 + rand() % 6;
		cout << ++step << ", " << cube1 << ", " << cube2 << endl;
	} while (cube1 != 6 || cube2 != 6);*/

	int T;
	double total, sum = 0;
	int step = 0, i;
	int neg = 0, pos = 0, null = 0;
	for (i = 0; i < 10; i++) {
		T = -20 + rand() % 25;
		cout << "temperature\n" << ++step << ", " << T << endl;
		sum += T;
		if (T < 0) {
			neg++;
		}
		if (T > 0) {
			pos++;
		}
		if (T == 0) {
			null++;
		}
	}
	total = sum / i;
	cout << "negative= " << neg << ", positive= " << pos << ", 0= " << null << ", total= " << total << endl;
	return 0;
}