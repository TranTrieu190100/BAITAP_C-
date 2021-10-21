#include<iostream>
using namespace std;
int n;
// ve trai tim 7*7

void TraiTim()
{
	cout << "\t\t\t\tTrai tim \n";
	for(int i = 1; i < 7;i ++) // hang
	{
		cout << "\t\t\t\t\t";
		for(int j = 1; j <= 7; j++) // cot 
		{
			if (! ((i == 1 &&(j == 1 || j == 4 || j== 7))
				|| (i == 4 &&( j==1 || j==7))
				|| (i == 5 && (j <=2 || j >=6))
				|| (i == 6 && (j <=3 || j >=5 ))))
			{ 
				cout << " * ";
			}
			else 
			cout << "   ";
		}
		cout << " \n";
	}

}
// bai 3: ve tam giac
void TamGiacCan()
{
	do
	{
		cout << " nhap chieu cao h: ";
		cin >> n;
	} while (n < 0);
	for (int i = 1; i < n; i++)
	{
		cout << "\t\t\t\t\t";
		for (int j = 1; j <= 2 * n - 1; j++) // chay theo canh day
		{
			if ( j == n -i + 1 || j == n + i - 1) // xet vi tri hien thi dau s 
			{
				cout << " * ";
			}
			else
				cout << "   ";
		}
		cout << " \n";
	}
	cout << "\t\t\t\t\t";
	for (int i = 0; i < 2 * n - 1; i++)
	{

		cout << " * ";
	}
}
void TamGiacCanDac()
{
	do
	{
		cout << "\n nhap chieu cao h: ";
		cin >> n;
	} while (n < 0);
	for (int i = 1; i <= n; i++)
	{
		cout << "\t\t\t\t\t";
		for (int j = 1; j <= 2 * n - 1; j++) // chay theo canh day
		{
			if (j >= (n - i + 1) && j <= (n + i - 1))
			{
				cout << " * " ;
			}
			else
				cout << "   ";
		}
		cout << " \n";
	}
}
////////////////////////////////////////////////////////////////////
// ve hinh chu nhat 
void ChuNhatRong()
{
	int a, b;
	do
	{
		cout << "nhap chieu dai: ";
		cin >> a; 
		cout << "\n nhap chieu rong: ";
		cin >> b;
	} while (n < 0);

	for (int i = 1; i <= b; i++)
	{
		cout << "\t\t\t\t\t";
		for (int j = 1; j <= a; j++)
		{
			if (i == 1 || j == 1 || i == b || j == a)
				cout << " * ";
			else cout << "   ";
		}
		cout << " \n";
	}

}
void ChuNhatDac()
{ 
	int a, b;
	do
	{
		cout << "nhap chieu dai: ";
		cin >> a;
		cout << "\n nhap chieu rong: ";
		cin >> b;
	} while (n < 0);
	for (int i = 1; i <= b; i++)
	{
		cout << "\t\t\t\t\t";
		for (int j = 1; j <= a; j++)
		{
			cout << " * ";
		}
		cout << " \n";
	}
}
//////////////////////////////////////////////////////////////////
//ve hinh thoi 
void HinhThoiRong() // 1 tam giac tren 1 tam giac duoi 
{
	do
	{
		cout << " nhap chieu cao hinh thoi h: ";
		cin >> n;
	} while (n < 0);
	for (int i = 1; i < n; i++)
	{
		cout << "\t\t\t\t\t";
		for (int j = 1; j <= 2 * n - 1; j++) // chay theo canh day
		{
			if (j == n - i + 1 || j == n + i - 1) // xet vi tri hien thi dau s 
			{
				cout << " * ";
			}
			else
				cout << "   ";
		}
		cout << " \n";
	}
	for (int i = 1; i <= n; i++)
	{
		cout << "\t\t\t\t\t";
		for (int j = 1; j <= 2 * n - 1; j++) // chay theo canh day
		{
			if (j == i || j == 2*n -i) // xet vi tri hien thi dau s 
			{
				cout << " * ";
			}
			else
				cout << "   ";
		}
		cout << " \n";
	}
}
void HinhThoiDac() // 1 tam giac tren 1 tam giac duoi 
{
	do
	{
		cout << " nhap chieu cao hinh thoi h: ";
		cin >> n;
	} while (n < 0);
	for (int i = 1; i < n; i++)
	{
		cout << "\t\t\t\t\t";
		for (int j = 1; j <= 2 * n - 1; j++) // chay theo canh day
		{
			if (j >= n - i + 1 &&  j <= n + i - 1) // xet vi tri hien thi dau s 
			{
				cout << " * ";
			}
			else
				cout << "   ";
		}
		cout << " \n";
	}
	for (int i = 1; i <= n; i++)
	{
		cout << "\t\t\t\t\t";
		for (int j = 1; j <= 2 * n - 1; j++) // chay theo canh day
		{
			if (j >= i && j <= 2 * n - i) // xet vi tri hien thi dau s 
			{
				cout << " * ";
			}
			else
				cout << "   ";
		}
		cout << " \n";
	}
}
int main()
{
	TraiTim();
	HinhThoiDac();
	HinhThoiRong();
	TamGiacCan();
	TamGiacCanDac();
	ChuNhatRong();
	ChuNhatDac();
}