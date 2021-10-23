#include<iostream>
using namespace std;

// bai tinh so giai thua s =(a! +b!+c!)/(a+b+c)!
int n;
float GiaiThua(int n)
{
	 int gt = 1;
	for (int i = 1; i <= n; i++)
	{
		gt = gt * i;
	}
	return gt;
}
int main()
{
	int a, b, c;
	float s;
	cout << " nhap a > 0: "; cin >> a;
	cout << "nhap b > 0: "; cin >> b;
	cout << "nhap c > 0: "; cin >> c;
	s = GiaiThua(a);	

	s = (float)(GiaiThua(a) + GiaiThua(b) + GiaiThua(c)) / (GiaiThua(a + b+ c));
	cout << " S = " <<s;
}
