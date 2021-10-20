// kiem tra so doi xung 
#include<iostream>
using namespace std;
// bai 3 kiem tra so doi tu day so nguyen duong n 
// thuat toan gia la dao nguoc lai coi no bang hai ko neu bang la doi xung / va %
int a, b,sum = 0;
void KTSDX(int n)
{
	a = n;
	while (n > 0) //  n = 0 se thoat vong lap
	{
		
		b = n % 10; // tach theo chieu so cuoi tung so 
		sum = sum * 10 + b; // lay tung so do bang cach nhan cho 10 rui cong lai 
		n = n / 10; // giam ,loai bo con so vua tach ra  
	}
	if (a == sum)
	{
		cout << a << " la so doi xung";
	}
	else
		cout << sum << "khong phai la so duoi xung";
}
int main()
{
	int n;
	cout << "nhap so nguyen duong can kiem tra doi xung!!! \n";
	cin >> n;
	KTSDX(n);

}
