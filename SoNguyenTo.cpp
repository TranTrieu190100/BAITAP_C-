#include<iostream>
#include<math.h>
using namespace std;

// BAI2: VD 123 => 23 
int KTSNT(int n) // kiem tra so nguyen to 
{
	
		if (n < 2)
			return 0;
		else 
		for (int i = 2; i < n; i++)
		{
			 if (n % i == 0)
			{
				return 0;
				break;
			}
		}
		return 1;	
}	
void XuatBai1(int n)
{
	if (KTSNT(n) == 1)
	{
		cout << n << " la so nguyen to:";
	}
	else cout << n << "khong phai la si nguyen to";
}
// ham xuat so nguyen to SO N tach tung so n 
void XuatBai2(int n)
{
	cout << " cac so nguyen to lan luot la:";
	while (n > 0)
	{
		if (KTSNT( n % 10 ) == 1)
		{
			cout << n % 10 << " "; // tach tung so 
		}
		n = n / 10;
	}
}
// BAI 3 VD = 11 ==> 2 3 5 7
void XuatBai3(int n)
{
	cout << "cac so nguyen to nho hon n la: ";
	for (int i = 2; i < n; i++)
	{	
		if (KTSNT(i) == 1)
		{
			cout << i <<" ";
		}
	}
}

int main()
{
	int n;
	cout << "nhap so can kiem tra: ";
	cin >> n;
	XuatBai1(n);

	cout << "\nnhap day so can kiem tra: ";
	cin >> n;
	XuatBai2(n);

	cout << "\nnhap so can kiem tra cac so nho hon n: ";
	cin >> n;
	XuatBai3(n);

}