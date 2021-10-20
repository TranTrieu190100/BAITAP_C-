#include<iostream>
#include<math.h>
using namespace std;

void SNT(int n) // kiem tra so nguyen to 
{
	for (int i = 2; i < n; i++)
	{
		if (n < 2)
			cout << n << " no khong phai la so nguyen to ";
		else if (n % i == 0)
		{
			cout << n <<" ko phai so nguyen to";
			break;
		}
		else
			cout << n << " la so nguyen to";
		break;
	}
}


int main()
{
	int n;
	cout << "nhap so nguyen to: ";
	cin >> n;
	SNT(n);
}