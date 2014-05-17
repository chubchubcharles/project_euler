#include <iostream>
using namespace std;

int main()
{
	int t1=0, t2=1, summa=0;
    while((t1=(t2+=t1)-t1) < 4000000)
        if (t1/2.0==t1/2)
            summa+=t1;
    std::cout<<summa;
    return 0;
	// int array[40];
	// array[0] = 1;
	// array[1] = 2;
	// int i = 1;
	// while (array[i] < 4000000)
	// {
	// 	array[i+1] = array[i] + array[i-1];
	// 	i++;
	// }

	// int sum = 0;
	// int j;
	// for (j = 0; j < i ; j++)
	// {
	// 	if (array[j] % 2 == 0)
	// 	{
	// 		sum = sum + array[j];
	// 	}
	// }
	// std::cout << sum << endl;
	// return 0;
}