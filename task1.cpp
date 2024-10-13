#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int T, r, m=1, g, b, n, i=1, num, larg, counter;
    
    std::cin >> T;
    while (i<=T) {
    
    cin>> n;
    int a[n][3];
    while (m<+n) {
        cin >> r >> g >> b;
        m++; }
        if (r>max(g, b)+100) counter++;
    i++;
    }
    cout<< counter;

    return 0;
}