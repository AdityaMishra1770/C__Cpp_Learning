#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char toLower(char a)
{
    if ((a >= 'a' && a <= 'z') || (a >= '0' && a <= '9'))
    {
        return a;
    }
    else
    {
        a = a - 'A' + 'a';
        return a;
    }
}
int getLen(char a[])
{
    int len = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
void reverseString(char a[], int len)
{
    int s = 0, e = len - 1;
    while (s < e)
    {
        swap(a[s++], a[e--]);
    }
}

void revStr(string s)
{
    int so = 0, e = s.length();
    while (so <= e)
    {
        swap(s[so++], s[e--]);
    }
}
bool checkPalindrome(char s[], int l)
{
    // Write your code here.
    int st = 0, e = l - 1;
    bool t = true;
    while (st <= e)
    {
        if (s[st++] == s[e--])
        {
            t = true;
        }
        else
        {
            t = false;
            break;
        }
    }
    return t;
}

bool isAlphaNum(char a)
{
    char b = toLower(a);
    if ((b >= 'a' && b <= 'z') || (b >= '0' && b <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

string convertArray(char a[])
{
    int e = getLen(a);
    string s;
    for (int i = 0; i < e; i++)
    {
        s += a[i];
    }
    return s;
}

char getMAXocc(string s)
{
    int a[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int num = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            num = ch - 'a';
        }
        else
        {
            num = ch - 'A';
        }
        a[num]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < a[i])
        {
            ans = i;
            maxi = a[i];
        }
    }
    return 'a' + ans;
}
string reverseArrayChar(char a[])
{
    string temp, s;
    for (int i = 0; i < getLen(a); i++)
    {
        if (isAlphaNum(a[i]))
        {
            temp += a[i];
        }
        else if (a[i] == ' ')
        {
            revStr(temp);
            s += temp + " ";
            temp = '\0';
        }
        else if (a[i] == '\0')
        {
            revStr(temp);
            s += temp;
            break;
        }
    }
    return s;
}

int main(int argc, char const *argv[])
{
    char a[20];
    cout << "Enter the string: ";
    cin.getline(a,20);
    cout << " Entered string is : " << a << endl;
    // getting length of array using function
    int n = getLen(a);
    cout << " len of string is " << n << endl;
    // reversing the array string using
    cout<<" reversed array string is : "<<reverseArrayChar(a)<<endl;
    // reversing the string using loop
    reverseString(a, n);
    cout << " Reversed String is : " << a << endl;
    // check palindrome
    cout << " palindrome or not : " << checkPalindrome(a, n) << endl;
    // To lower
    cout << " lower of B is : " << toLower('B') << endl;
    // convert to string
    string si = convertArray(a);
    cout << " Converted string is : " << si << endl;
    // Max occuring character
    cout << " max occ character is " << getMAXocc(si);
    return 0;
}