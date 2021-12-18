/*

Перевести заданное целое число (<4000) в систему римского счета.
	Система римских цифр использует особые знаки для десятичных разрядов I=1, X=10, C=100, M=1000 и их половин V=5, L=50, D=500.
	Натуральные числа записываются при помощи повторения этих цифр. При этом, если большая цифра стоит перед меньшей, то они складываются, если же меньшая перед большей, то меньшая вычитается из большей. Последнее правило применяется во избежание четырехкратного повторения одной и той же цифры. Например, XL=50-10=40 вместо XXXX.
	Максимально возможное число, записанное по правилам в римской системе счисления 3999. 

*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cout << "Enter value you want to convert to Roman Numeral from 1 to 3999:\n ";
    if (!(N >= 1 && N <= 3999)) 
	{
		cout << "Invalid input!!!\n";
		return 0;	
	}
    cin >> N;

    int arr[] = { 1,4,5,9,10,40,50,90,100,400,500,900,1000 };
    string map[] = { "I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M" }; 
    int largest_base = 12;
    while (N > 0)
    {
        int divider = N / arr[largest_base];
        N = N % arr[largest_base];
        while (divider--)
        {
            cout << map[largest_base];
        }
        --largest_base;
    }
}


