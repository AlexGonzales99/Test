#include <iostream>

using namespace std;

int main()
{
	short numbers[] = {10,20,30,40};
	
	cout << "The first element of the array is: " ;
	cout << *(numbers + 1) << endl;

	
	return 0;
}
