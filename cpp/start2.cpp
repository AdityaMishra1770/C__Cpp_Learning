#include <iostream>
using namespace std;
/// @brief
/// @param
/// @return
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n - 1) + n;
    }
}
int fib(int n)
{
    int b = 1, c = 0, sum = 0;
    while (c <= n)
    {
        cout << sum << "\t";
        sum += b;
        b = sum - b;
        c++;
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    // Bitwise Operator :
    /// Bitwise compares every single binary place according to operand and results acc. to truth table
    // int i = 9, m= 9;
    // cout<<(2&4)<<endl;
    // cout<<(2|4)<<endl;
    // cout<<(~10)<<endl;
    // cout<<(7^5)<<endl;
    // cout<<"\n";
    // //Post_increment_decrement;
    // cout<<4+(i++)<<endl;
    // cout<<4+(i--)<<endl;
    // //Pre_increment_decrement;
    // cout<<4+(--m)<<endl;
    // cout<<4+(m++)<<endl;
    // cout<<4+(++m)<<endl;

    // Sum of first n digits // for rescursion first think for "if" condition, extremes for input
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << "sum from 0 till " << i << " is :" << sum(i) << endl;
    }
    // Lets compare the sum of first n digit
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "sum from 0 till " << i << " is :" << i * (i / 2 + 0.5) << endl;
        }
        else
        {
            cout << "sum from 0 till " << i << " is :" << i * (i / 2 + 1) << endl;
        }
    }

    // Fibonacci series
    fib(n);

    // Continue below is unreachable
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        if (i == 6)
        {

            cout << "Tried to Recieve at" << i << endl;
            continue;
            cout << "Recieved 6" << endl;
        }
        else
        {
            cout << "Recieved" << i << endl;
        }
    }
    int uo;
    cin>> uo;
    int u =uo;
    int summ = 0, mul =1;
    while (u != 0)
    {
        int ui = u%10;
        summ += ui;
        mul *= ui;
        u = u/10;
    }
    cout << "Sum  and multiply difference of : "<<uo<<" is "<<mul - summ<<endl;
    return 0;
}