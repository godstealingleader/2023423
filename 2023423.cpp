#include <iostream>

int print_from_smaLL_to_Large(int smaLL, int Large)
{
	int consequence = 0;
	for (int i = 0; i < Large - smaLL; i++)
	{
		//std::cout << smaLL + i << std::endl;
		consequence = consequence + smaLL + i;
	}
	return consequence + Large;
}


int main()
{
	using namespace std;
	int smaLL = 0, Large = 0;
	cout << "please enter firsst number: "; cin >> smaLL;
	cout << "please enter next number: "; cin >> Large;
	cout <<"sum = " << print_from_smaLL_to_Large(smaLL, Large);
	return 0;
}