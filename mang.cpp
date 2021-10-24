#include<iostream>
using namespace std;

// Nhap xuat mang
int n;
int a[100];
void NhapMang()
{
	cout << " Nhap mang so luong phan tu mang nho hon 100 : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << " Phan tu mang thu a[" << i << "] = ";
		cin >> a[i];
	}

}
void XuatMang()
{
	cout << "\n Cac phan tu cua mang ban vua nhap la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] <<" ";
	}
}
int main()
{
	NhapMang();
	XuatMang();
}