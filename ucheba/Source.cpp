#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Kripak Ksenia Romanovna, 241-326" << endl;
	int min_int, max_int;
	min_int = 0b10000000000000000000000000000000;
	max_int = 0b01111111111111111111111111111111;
	cout << "min int = " << min_int << ", max int = " << max_int << ", size of int = " << sizeof(int) << endl;
	unsigned int min_unsigned_int, max_unsigned_int;
	min_unsigned_int = 0b00000000000000000000000000000000;
	max_unsigned_int = 0b11111111111111111111111111111111;
	cout << "min unsigned int = " << min_unsigned_int << ", max_unsigned_int = " << max_unsigned_int << ", size of unsigned int = " << sizeof(unsigned int) << endl;
	short min_short, max_short;
	min_short = 0b1000000000000000;
	max_short = 0b0111111111111111;
	cout << "min short = " << min_short << ", max short = " << max_short << ", size of short = " << sizeof(short) << endl;
	return 0;
}