#include<iostream>
using namespace std;

// BAI 59: NHAP VAO NAM DUNG LICH XUAT TEN NAM AM LICH 
// XUAT NAM DUNG LICH KE TIEP CO CUNG TEN NAM AM LICH CHU KI CAN CHI 
// goi y: nam co cung ten Âm lich với nam y la y+-k*60( 60 la BSCNN cua hai chu ki 10 va 12). Moc tinh Can Chi, lay nam 0 la nam Canh Than

string can[10] = {"Canh","Tan","Nham","Quy","Giap","At","Binh","Dinh"};
string chi[12] = { "Than", "Dau", "Tuat", "Hoi", "Ti", "Suu",
				   "Dan", "Meo", "Thin", "Ty", "Ngo", "Mui" };

int main()
{
	int n;
	cout << "nhap nam: ";
	cin >> n;

	cout << "\n\t\t\tNam: " << n <<" "<<can[n % 10] << " " << chi[n % 12];
	cout << "\n\t\t\tNam tiep theo: " << n + 60 <<" "<< can[n % 10] << " " << chi[n % 12];

}