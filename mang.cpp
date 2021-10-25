#include<iostream>
using namespace std;

// Nhap xuat mang
int n;
int a[100];
void NhapMang( int n, int a[] )
{
	
	for (int i = 0; i < n; i++)
	{
		cout << " Phan tu mang thu a[" << i << "] = ";
		cin >> a[i];
	}

}
void XuatMang(int n, int a[])
{
	cout << "\n Cac phan tu cua mang ban vua nhap la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] <<" ";
	}
}
// xap xepv
void SapXep(int n, int a[])
{
	int tam;
	for (int i = 0; i < n; i++)
	{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] > a[j])
				{
					tam = a[i];
					a[i] = a[j];
					a[j] = tam;
				}
			}
	}
			
}

int main()
{
	cout << " Nhap mang so luong phan tu mang nho hon 100 : ";
	cin >> n;
	NhapMang(n,a);
	SapXep(n,a);
	XuatMang(n,a );
}