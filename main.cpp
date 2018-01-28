#include <iostream>

using namespace std;

template<typename K>
K sum(K x, K y)
{
	K z = x + y;
	return z;
}


int main()
{
	cout << "Ints Ka Sum   " << sum(1, 2) << endl;
	cout << "Doubles Ka Sum   " << sum(1.5, 2.2) << endl;
	getchar();

}