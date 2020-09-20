#include <iostream>
#include <math.h>
#include <iomanip>
#include <conio.h>
#include <windows.h>

using namespace std;

typedef unsigned long long ull;
ull fconst(ull val) { return val; }
ull fnlogn(ull val) { return val * log2(val); }
ull fquadratic(ull val) { return val * val; }
ull fcubic(ull val) { return val* val* val; }

void head(int a, int b, int c, int d, int e, int f, int g, int h)
{
	cout << fixed << setprecision(2) << fixed;

	cout.width(a);
	cout << "in|";

	cout.width(b);
	cout << "n|";

	cout.width(c);
	cout << "nlogn|";

	cout.width(d);
	cout << "n2|";

	cout.width(e);
	cout << "n3|";

	cout.width(f);
	cout << "cb/qu|";

	cout.width(g);
	cout << "cb/nl|";

	cout.width(h);
	cout << "cb/co|";

	cout << "\n------------------------------------------------------------------------------------------\n";
}
void calc(int a, int b, int c, int d, int e, int f, int g, int h, ull start, ull jmp, int time) 
{
	_getch();

	ull i = start;
	while (true)
	{
		cout.width(8);
		cout << i;

		cout.width(8);
		cout << fconst(i);

		cout.width(10);
		cout << fnlogn(i);

		cout.width(10);
		cout << fquadratic(i);

		cout.width(15);
		cout << fcubic(i);

		cout.width(13);
		cout << fcubic(i) / fquadratic(i);

		cout.width(13);
		cout << fcubic(i) / fnlogn(i);

		cout.width(13);
		cout << fcubic(i) / fconst(i);

		cout << endl;
		Sleep(time);

		i += jmp;
	}
}

int main()
{
	head(8, 8, 10, 10, 15, 13, 13, 13);
	calc(8, 8, 10, 10, 15, 13, 13, 13, 2, 1, 100);
	return 0;
}