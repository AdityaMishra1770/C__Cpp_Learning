#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // Switch fro no. of notes.

    int note;
    cin >> note;
    while (note != 0)
    {
        int casey = note >= 100 ? 1 : note >= 50 ? 2
                                 : note >= 20   ? 3
                                               : 4;
        // cout << note << " Casey becomes " << casey << endl;
        switch (casey)
        {
        case 1:
            cout << "100's note : " << note / 100 << endl;
            note = note % 100;
            // cout << note << endl;
            break;
        case 2:
            cout << "50's note : " << note / 50 << endl;
            note = note % 50;
            // cout << note << endl;
            break;
        case 3:
            cout << "20's note : " << note / 20 << endl;
            note = note % 20;
            // cout << note << endl;
            break;
        case 4:
            cout << "1's note : " << note / 1 << endl;
            note = note % 1;
            // cout << note << endl;
            break;
        default:
            cout << "Error" << endl;
            break;
        }
    }

    cout << "Pyara Calculator" << endl;
    int a, b;
    char o;
    cout << "Enter a number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
first:
    cout << "Started again choose correct operation values are : " << a << " " << b << endl;
    cout << "Enter a operation : ";
    cin >> o;
    switch (o)
    {
    y:
    {
        int ao;
        cout << "Enter 1 for another operation : ";
        cin >> ao;

        if (ao == 1)
        {
            goto first;
        }
        else
        {
            break;
        }
    }

    case '+':
        cout << "sum is " << a + b << endl;
        goto y;
        break;
    case '-':
        cout << "Difference is " << a - b << endl;
        goto y;
        break;
    case '*':
        cout << "Product is " << a * b << endl;
        goto y;
        break;
    case '/':
        cout << "Qutoient is " << a / b << endl;
        goto y;
        break;
    default:
        cout << "Enter valid Operation!" << endl;
        goto first;
    }

    while (1) // Homework solution use of exit(0);
    {
        cout << "Loop satrted don't enter 1" << endl;
        int o;
        cout << "Enter a number: ";
        cin >> o;
        switch (o)
        {
        case 1:
            cout << "in loop" << endl;
            break;

        default:
            cout << "Out of program now";
            exit(2);
            break;
        }
    }

    int n;
    char ch;
    cin >> n;
    cin >> ch;

    switch (n)
    {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two satrted" << endl;
        switch (ch) // Nested switch case::
        {
        case 'a':
            cout << "Outed a" << endl;
            break;
        case 'b':
            cout << "Outed b" << endl;
            break;

        default:
            break;
        }
        break;
    default:
        cout << "None matched";
    }
    return 0;
}