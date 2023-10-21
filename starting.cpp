#include<iostream>
using namespace std;
int s(int a, int k) {
    int m = (a - 1) / k;
    return m * (m + 1) / 2 * k;
}
int main(){
    int co= s(1000000000,3)+s(1000000000,5)-s(1000000000,15);
    cout<<co;
    int c;
    std::cin>>c;
    cout<<c<<"\n";
    for(int i= 0; i<=c; i++){
        cout<<i<<endl;
    }
    return 0;
}