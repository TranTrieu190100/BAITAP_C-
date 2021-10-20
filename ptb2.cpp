#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c;
    float d, x1, x2, rp, ip;

    cout << "nhap a, b va c : " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    while (a == 0)
    {
        cout << "vui long nhap lai!" << endl;
        cin >> a;

    }
    d = b * b - (4 * a * c);
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "nghiem cua pt la: " << x1 << " va " << x2 << endl;
    }
    else if (d == 0)
    {
        x1 = -b / (2 * a);
        cout << "nghiem cua pt la: " << x1 << endl;
    }
    else
    {
        rp = -b / (2 * a);
        ip = sqrt(-d) / (2 * a);
        cout << "nghiem cua pt la: " << endl;
        cout << rp + ip << "i" << endl;
        cout << rp - ip << "i" << endl;
    }
    return 0;
}