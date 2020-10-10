#include <iostream>
using namespace std;


bool BeautifulYear(int year) {
	int arr[1000], length = 0;
	while (year !=0) {
		arr[length]= year % 10;
		year = year / 10;
		length++;
	}
	
	for (int j = 0; j < length-1; j++) {
		for (int i = j + 1; i < length; i++) {
			if (arr[j] == arr[i]) {
				return false;
			}
		}
	}
	return true;

}
int main()
{
	int year;
	cin >> year;
	++year;
	while (BeautifulYear(year) == false)
	{
		++year;
	}
	cout << year;
	//jxbjbjbj   xx
}
