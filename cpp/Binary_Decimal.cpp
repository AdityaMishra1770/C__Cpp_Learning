#include <iostream>
#include <math.h>
using namespace std;
int bit_converter(int n)
{
    int bit, binaryNo = 0, o = 0;
    while (n != 0)
    {
        bit = n & 1;
        int place = pow(10, o) * bit;
        binaryNo += place;
        n = n >> 1;

        cout << "n " << n << " bit " << bit << " place " << place << " binary no " << binaryNo << endl;
        o++;
    }
    return binaryNo;
}

int decimal_conversion(int n)
{
    int result = 0, digit, pw = 0;
    while (n != 0)
    {
        digit = n % 10;
        n = n / 10;
        cout << "digit" << digit << " pw" << pw << " result" << result << "n" << n << endl;
        result = digit * pow(2, pw) + result;
        pw++;
    }
    return result;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int o = bit_converter(n);
    cin >> o;
    // cout << "Binary conversion of : " << n << " is " << bit_converter(n) << endl;
    cout << "Decimal conversion of : " << o << " is " << decimal_conversion(o) << endl;

    return 0;
}