#include <iostream>
using namespace std;

int main()
{
	int sum = 0;

	for (int i = 1; i < 1000; i++){
		if (i % 3 == 0 || i % 5 == 0){
			sum = sum + i;
		}
	}
	
	cout << "This is the sum of multiples of 3 and 5 under 1000:" << sum << endl;
}