#include<iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int a,b;

    // ---------------    cin.get()      -----------------
    // a = cin.get();  
    // cin.get(string_name, size); cin.get() reads the whitespaces as well; 

    // =====================-----------------------


    cin>>a; //------Pattern Printing---------------
    cout<<"Value of a is "<<a<<" and b is "<<b<<"\n"<<endl;
    cout<<"Printing Pattern 1"<<endl;
    int out = 0;
    while (b<a)
    {
        b++;
        for (int i=1;i<=b;i++)
        {out++;cout<<out<<"\t";}cout<<"\n";
    }
    cout<<"Printing Pattern 2"<<endl;
    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k < a; k++)
        {
            cout<<k+1;
        }cout<<"\n";
        
    }


    cout<<"Printing Pattern 3"<<endl;
    int out2 = 1;
    for (int u = 0; u < a; u++)
    {
        for (int p = 1; p <= a ; p++)
        {
            cout <<out2<< "\t";out2++;
        }cout<<"\n";
        
    }
    cout<<"Printing Pattern 4"<<endl;
    for (int y = 0; y < a; y++)
    {
        for (int o = 0; o < y+1; o++)
        {
            cout<<"*";
        }cout<<"\n";
        
    }
    cout<<"Printing Pattern 5"<<endl;
    for (int x = 0; x < a; x++){
        int ui = x+1;
        for (int z = 0; z < x+1; z++){
            cout<<ui;
            ui++;
        }cout<<"\n";
    }
    cout<<"Printing Pattern 6"<<endl;
    for (int xo = 0; xo < a; xo++){
        int uio = xo+1;
        for (int zo = 0; zo < xo+1; zo++){
            cout<<uio;
            uio--;
        }cout<<"\n";
    }
    cout<<"Printing Pattern 7"<<endl;
    for (int er = 0; er < a; er++){
        char oi = er + 65;
        for (int zu = 0; zu < a; zu++){
            cout<<oi;
        }cout<<"\n";
    }
    cout<<"Printing Pattern 8"<<endl;
    for (int xp = 0; xp < a; xp++){
        char upi = 65;
        for (int zp = 0; zp < a; zp++){
            cout<<char(upi);
            (upi)++;
        }cout<<"\n";
    } 
    cout<<"Printing Pattern 9"<<endl;
    for (int xop = 0; xop < a; xop++){
        char uiz = xop+65;
        for (int zu = 0; zu < a; zu++){
            cout<<uiz;
            uiz++;
        }cout<<"\n";
    }
    cout<<"Printing Pattern 10"<<endl;
    for (int x = 0; x < a; x++){
        char ui = 64+a-x;
        for (int z = 0; z < x+1; z++){
            cout<<ui;
            ui++;
        }cout<<"\n";
    }
    cout<<"Printing Pattern 11"<<endl;
    for (int op = 0; op < a; op++)
    {
        for (int r = 0; r < a-op-1; r++)
        {
            cout<<" ";
        }
        for (int ir = 0; ir < op+1; ir++)
        {
            cout<<"*";
        }cout<<"\n";
        
    }
    cout<<"Printing Pattern 12"<<endl;
    for (int op = 0; op < a; op++)
    {
        for (int r = 0; r < op; r++)
        {
            cout<<" ";
        }
        for (int ir = 0; ir < a-op; ir++)
        {
            cout<<"*";
        }cout<<"\n";
        
    }
    cout<<"Printing Pattern 13"<<endl;
    for (int op = 0; op < a; op++)
    {
        for (int r = 0; r < a-op-1; r++)
        {
            cout<<" ";
        }
        for (int ir = 1; ir <= op+1; ir++)
        {
            cout<<ir;
        }   
        for (int ir = op; ir > 0; ir--)
        {
            cout<<ir;
        }cout<<"\n";
        
    }
    cout<<"Printing Pattern 14"<<endl;
    for (int op = 0; op < a; op++)
    {
        
        for (int ir = 1; ir <= a-op; ir++)
        {
            cout<<ir;
        }
        for (int r = 0; r < op*2; r++)
        {
            cout<<"*";
        }   
        for (int ir = a-op; ir > 0; ir--)
        {
            cout<<ir;
        }cout<<"\n";
        
    }
    



    return 0;
}