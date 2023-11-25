#include <iostream>
using namespace std;
bool isEven(int a)
{
    if (a & 1)
        return false;
    return true;
}

// home-work A.P.
int ap_3Mn_pl_7(int a){
    return  (3*a + 7);
}

int fibo(int f) {
    int a = 0, b= 1 ,c=0;
    while(c < f-1){
        // cout<<a<<" ";
        a = a+b;
        b = a-b;
        c++;
    }
    return a;
}

//  ---------The end of homeworks__________________
int fact(int a)
{
    if (a <= 0)
        return 1;
    long int ans = 1;
    while (a != 0)
    {
        ans = ans * a;
        a--;
    }
    return ans;
}
int combunation(int n, int r)
{
    float ans = fact(n) / (fact(r) * fact(n - r));
    return ans;
}
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    int n, ip;
    cout << "To enter functionaries enter 1 : ";
    cin >> ip;
    if (ip)
    {
        cout<<"enter no. for funtion calls: ";

        cin >> n;
        cout<<"nth term of A.P. for 3*n+7 ;"<<ap_3Mn_pl_7(n)<<"\n"<<n<<"th term of fibonacci series is : "<<fibo(n)<<endl;
        for (int i = 1; i <= n; i++)
        {
            if (isPrime(i))
            {
                cout << i << " ";
            }
        }
        cout << endl;
        cout << "Factorial of " << n << " is " << fact(n) << endl;
        if (isEven(n))
        {
            cout << "The number " << n << " is even." << endl;
        }

        else
        {
            cout << "The number " << n << " is odd. " << endl;
        }
        cout << "The combunation " << endl;
    f:
        cout << "Select a,b" << endl;
        int a, b;
        cin >> a >> b;
        cout << "Commbunation of " << a << " & " << b << " is " << combunation(a, b) << endl;
        bool o;
        cout << "Enter 1 for re-entry" << endl;
        cin >> o;
        if (o)
        {
            goto f;
        }
        else
        {
            cout << "Out of factorial selection. " << endl;
        }
    }
    else
    {
        cout << "The loop breaked";
    }

    return 0;
}