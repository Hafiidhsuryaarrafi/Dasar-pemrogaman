#include <iostream>

using namespace std;

int main()
{
    cout << "Bentuk Senyawa Berdasarkan Temperature" << endl;

    float x;
    cout << "Masukkan Temperatur dalam C : ";
    cin >> x;
    if (x <= 0)
    cout << "Senyawa Berupa Ice" << endl;
    else if (x > 100)
    cout << "Senyawa Berupa Gas" << endl;
    else
    cout << "Senyawa Berupa Liquid" << endl;
    return 0;

}
