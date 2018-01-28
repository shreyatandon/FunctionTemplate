#include <iostream>

using namespace std;


//Single "K" means only one template parameters
template<typename K>
K sum(K x, K y)
{
	K z = x + y;
	return z;
}

//"K1" and "K2" are Two template parameters
template<typename K1, typename K2>
K1 sum(K1 x, K2 y)
{
	K1 z = x + y;
	return z;
}

int main()
{
	cout << "Ints Ka Sum   " << sum(1, 2) << endl;
	cout << "Doubles Ka Sum   " << sum(1.5, 2.2) << endl;
	cout << "Double and Int Ka Sum   " << sum(1.5, 2) << endl;

	getchar();

}